/* This file is part of Into.
 * Copyright (C) Intopii 2013.
 * All rights reserved.
 *
 * Licensees holding a commercial Into license may use this file in
 * accordance with the commercial license agreement. Please see
 * LICENSE.commercial for commercial licensing terms.
 *
 * Alternatively, this file may be used under the terms of the GNU
 * Affero General Public License version 3 as published by the Free
 * Software Foundation. In addition, Intopii gives you special rights
 * to use Into as a part of open source software projects. Please
 * refer to LICENSE.AGPL3 for details.
 */

#include "PiiDatabaseOperation.h"

#include <PiiYdinTypes.h>
#include <PiiDelay.h>

#include <QSqlDatabase>
#include <QUrl>
#include <QSqlQuery>
#include <QSqlError>


int PiiDatabaseOperation::_iConnectionIndex(0);

PiiDatabaseOperation::Data::Data() :
  strConnectionId(QString("pii%1").arg(_iConnectionIndex++)),
  strDatabaseUri("null://"),
  pDb(0),
  iRetryDelay(100),
  iRetryCount(0),
  bConnected(false),
  bIgnoreErrors(false)
{}

PiiDatabaseOperation::PiiDatabaseOperation() :
  PiiDefaultOperation(new Data)
{
  init();
}

PiiDatabaseOperation::PiiDatabaseOperation(Data* data) :
  PiiDefaultOperation(data)
{
  init();
}

void PiiDatabaseOperation::init()
{
  setThreadCount(1);
  setThreadingCapabilities(SingleThreaded);
}

PiiDatabaseOperation::~PiiDatabaseOperation()
{
  closeConnection();
}

void PiiDatabaseOperation::aboutToChangeState(State state)
{
  if (state == Stopped)
    closeConnection();
}

void PiiDatabaseOperation::error(const QString& message)
{
  if (_d()->bIgnoreErrors)
    piiWarning(message);
  else
    PII_THROW(PiiExecutionException, message);
}

bool PiiDatabaseOperation::openConnection()
{
  PII_D;
  closeConnection();
  //delete d->pDb, d->pDb = 0;

  QUrl dbUrl(d->strDatabaseUri);
  if (d->strDatabaseUri.isEmpty() || !dbUrl.isValid())
    {
      error(tr("Database uri has not been set or it is incorrectly formatted."));
      return false;
    }

  QString strDb = dbUrl.path().remove(0,1);
  if (strDb.isEmpty())
    strDb = d->strDatabaseName;
  d->pDb = createDatabase(dbUrl.scheme(),
                          dbUrl.userName(),
                          dbUrl.password(),
                          dbUrl.host(),
                          dbUrl.port(),
                          strDb);
  return d->pDb != 0;
}

int PiiDatabaseOperation::defaultPort(const QString& driver)
{
  struct PortMap { const char* driver; int port; };
  PortMap portMap[] =
    {
      { "mysql", 3306 },
      { "psql", 5432 },
      { "oci", 2483 },
      { "tds", 2638 }
    };
  for (unsigned i=0; i<sizeof(portMap)/sizeof(PortMap); ++i)
    if (driver == portMap[i].driver)
      return portMap[i].port;
  return -1;
}

QSqlDatabase* PiiDatabaseOperation::createDatabase(const QString& driver,
                                                   const QString& user,
                                                   const QString& password,
                                                   const QString& host,
                                                   int port,
                                                   const QString& database)
{
  PII_D;
  QSqlDatabase* pDb = 0;
  /*QStringList drivers = QSqlDatabase::drivers();
    for ( int i=0; i<drivers.size(); i++ )
    qDebug("%s",drivers[i].toAscii().constData());
  */
  if (driver == "null")
    return 0;
  else if (driver == "qt")
    {
      pDb = new QSqlDatabase(QSqlDatabase::database(host));
      if (!pDb->isValid() || (!pDb->isOpen() && !pDb->open()))
        {
          delete pDb;
          error(tr("Cannot open database connection \"%1\"").arg(host));
          return 0;
        }
    }
  else
    {
      QString strDriverName = "Q" + driver.toUpper();

      if (!QSqlDatabase::isDriverAvailable(strDriverName))
        {
          error(tr("There is no database driver available for \"%1\"").arg(driver));
          return 0;
        }

      pDb = new QSqlDatabase(QSqlDatabase::addDatabase(strDriverName, d->strConnectionId));
      if (!pDb->isValid())
        {
          delete pDb;
          error(tr("Cannot create database driver for \"%1\"").arg(driver));
          return 0;
        }

      pDb->setHostName(host);
      pDb->setDatabaseName(database);
      pDb->setUserName(user);
      pDb->setPassword(password);
      pDb->setPort(port != -1 ? port : defaultPort(driver));
      if (!pDb->open())
        {
          delete pDb;
          error(tr("Cannot open database connection to %1/%2").arg(host,database));
          return 0;
        }
    }
  d->bConnected = true;
  return pDb;
}

void PiiDatabaseOperation::closeConnection()
{
  PII_D;
  delete d->pDb, d->pDb = 0;
  d->bConnected = false;
  // If we were using the qt:// connection scheme, this doesn't do
  // anything.
  QSqlDatabase::removeDatabase(d->strConnectionId);
}

bool PiiDatabaseOperation::checkQuery(QSqlQuery& query)
{
  QSqlError lastError = query.lastError();
  if (lastError.type() == QSqlError::NoError)
    return true;

  QString strQuery = query.lastQuery();
  if (strQuery.size() > 100)
    strQuery = strQuery.left(97) + "...";
  error(tr("Failed SQL query: %1\n"
           "\tError type: %2\n"
           "\tError number: %3\n"
           "\tError message: %4.")
        .arg(strQuery)
        .arg((int)lastError.type())
        .arg(lastError.number())
        .arg(lastError.text()));

  return false;
}

bool PiiDatabaseOperation::exec(QSqlQuery& query)
{
  if (query.exec())
    return true;

  if (query.lastError().type() == QSqlError::ConnectionError)
    {
      PII_D;
      // Retry a few times.
      int i = d->iRetryCount;
      while (i-- > 0 && state() == Running)
        {
          PiiDelay::msleep(d->iRetryDelay);
          if (query.exec())
            return true;
        }
    }

  return checkQuery(query);
}

void PiiDatabaseOperation::setDatabaseUri(const QString& databaseUri) { _d()->strDatabaseUri = databaseUri; }
void PiiDatabaseOperation::setDatabaseName(const QString& databaseName) { _d()->strDatabaseName = databaseName; }
void PiiDatabaseOperation::setIgnoreErrors(bool ignoreErrors) { _d()->bIgnoreErrors = ignoreErrors; }
void PiiDatabaseOperation::setRetryDelay(int retryDelay) { _d()->iRetryDelay = retryDelay; }
void PiiDatabaseOperation::setRetryCount(int retryCount) { _d()->iRetryCount = retryCount; }

QString PiiDatabaseOperation::databaseUri() const { return _d()->strDatabaseUri; }
QString PiiDatabaseOperation::databaseName() const { return _d()->strDatabaseName; }
bool PiiDatabaseOperation::ignoreErrors() const { return _d()->bIgnoreErrors; }
int PiiDatabaseOperation::retryDelay() const { return _d()->iRetryDelay; }
int PiiDatabaseOperation::retryCount() const { return _d()->iRetryCount; }

QSqlDatabase* PiiDatabaseOperation::db() { return _d()->pDb; }
bool PiiDatabaseOperation::isConnected() const { return _d()->pDb != 0 && _d()->pDb->isOpen(); }

QSqlDriver* PiiDatabaseOperation::driver()
{
  PII_D;
  if (d->pDb == 0) return 0;
  return d->pDb->driver();
}
