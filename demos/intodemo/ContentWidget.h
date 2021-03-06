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

#ifndef _CONTENTWIDGET_H
#define _CONTENTWIDGET_H

#include <QWidget>
#include <QDir>
#include <PushButton.h>
#include <QShowEvent>

#include <ui_contentwidget.h>

class ContentWidget : public QWidget, private Ui_ContentWidget
{
  Q_OBJECT

public:

  enum Mode { Release, Debug, Production };

  ContentWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0);
  ~ContentWidget();

  /**
   * A structure that stores information about a document.
   */
  struct Document
  {
    /**
     * Create a default Document structure.
     */
    Document(const QString& key) : strKey(key), strTitle(""), strDescription("")
    {}
    QString strKey;
    QString strTitle;
    QString strDescription;
    QPixmap pixmap;
  };

signals:
  void quit();

private slots:
  void quitButtonClicked();
  void demoButtonClicked();
  void executeCurrentDemo();
  void openCurrentDocumentation();

protected:
  void showEvent(QShowEvent *e);
  void enterEvent(QEvent *event);
  void resizeEvent(QResizeEvent *e);

private:
  void updateImageSize();

  void initDirectory();
  bool isThereSubDemoDirectories(const QDir& dir);
  QStringList removeExtraDirectories(const QDir& dir, const QStringList& directories);
  QString getTitle(const QString& path, const QString& dirname);

  void setActionButtonsVisibility(bool visible);
  void updateInfo(Document *document);
  Document* getCurrentDocument();
  Document* createNewDocument(const QDir& directory);

  QDir _demoDir, _currentDir, _demoRootDir;
  QList<PushButton*> _lstDemoButtons;
  QList<Document*> _lstDocuments;
  QString _strMode;

  QPixmap _pixmapFolder, _pixmapQuit, _pixmapBack, _pixmapLaunch;
  QSize _imageRefSize;
  Mode _mode;
  bool _bMacOS;
};


#endif //_CONTENTWIDGET_H
