/* This file is originally a machine-generated file included in the
 * FAST source code distribution. Modified to template code and
 * adapted to Into data types.
 */

#include <PiiImageTraits.h>
#include <QVector>

#define FAST_PIXEL_AT(INDEX) (*reinterpret_cast<const T*>(reinterpret_cast<const char*>(p) + pixel[INDEX]))

template <class T>
inline void fast9_make_offsets(int pixel[], int row_stride)
{
  pixel[0] =                   row_stride * 3;
  pixel[1] =       sizeof(T) + row_stride * 3;
  pixel[2] =   2 * sizeof(T) + row_stride * 2;
  pixel[3] =   3 * sizeof(T) + row_stride * 1;
  pixel[4] =   3 * sizeof(T) + row_stride * 0;
  pixel[5] =   3 * sizeof(T) + row_stride * -1;
  pixel[6] =   2 * sizeof(T) + row_stride * -2;
  pixel[7] =       sizeof(T) + row_stride * -3;
  pixel[8] =                   row_stride * -3;
  pixel[9] =      -sizeof(T) + row_stride * -3;
  pixel[10] = -2 * sizeof(T) + row_stride * -2;
  pixel[11] = -3 * sizeof(T) + row_stride * -1;
  pixel[12] = -3 * sizeof(T) + row_stride * 0;
  pixel[13] = -3 * sizeof(T) + row_stride * 1;
  pixel[14] = -2 * sizeof(T) + row_stride * 2;
  pixel[15] =     -sizeof(T) + row_stride * 3;
}

template <class T>
int fast9_corner_score(const T* p,
                       const int pixel[],
                       typename Pii::Combine<T,int>::Type bstart)
{
  typedef typename Pii::Combine<T,int>::Type CalcType;
  CalcType bmin = bstart;
  CalcType bmax = PiiImage::Traits<T>::max();
  CalcType b = (bmax + bmin)/2;

  /*Compute the score using binary search*/
  for (;;)
    {
      CalcType cb = *p + b;
      CalcType c_b = *p - b;

      if (FAST_PIXEL_AT(0) > cb)
        if (FAST_PIXEL_AT(1) > cb)
          if (FAST_PIXEL_AT(2) > cb)
            if (FAST_PIXEL_AT(3) > cb)
              if (FAST_PIXEL_AT(4) > cb)
                if (FAST_PIXEL_AT(5) > cb)
                  if (FAST_PIXEL_AT(6) > cb)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(8) > cb)
                        goto is_a_corner;
                      else
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(6) < c_b)
                    if (FAST_PIXEL_AT(15) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    if (FAST_PIXEL_AT(14) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    if (FAST_PIXEL_AT(14) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else if (FAST_PIXEL_AT(5) < c_b)
                  if (FAST_PIXEL_AT(14) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    if (FAST_PIXEL_AT(11) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(14) < c_b)
                    if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(8) < c_b)
                        if (FAST_PIXEL_AT(9) < c_b)
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  if (FAST_PIXEL_AT(6) < c_b)
                                    goto is_a_corner;
                                  else
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    if (FAST_PIXEL_AT(11) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(8) < c_b)
                        if (FAST_PIXEL_AT(9) < c_b)
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  if (FAST_PIXEL_AT(6) < c_b)
                                    goto is_a_corner;
                                  else
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else if (FAST_PIXEL_AT(4) < c_b)
                if (FAST_PIXEL_AT(13) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(5) < c_b)
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else if (FAST_PIXEL_AT(13) < c_b)
                  if (FAST_PIXEL_AT(7) < c_b)
                    if (FAST_PIXEL_AT(8) < c_b)
                      if (FAST_PIXEL_AT(9) < c_b)
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(6) < c_b)
                                if (FAST_PIXEL_AT(5) < c_b)
                                  goto is_a_corner;
                                else
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                              else
                                if (FAST_PIXEL_AT(14) < c_b)
                                  if (FAST_PIXEL_AT(15) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(5) < c_b)
                    if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  if (FAST_PIXEL_AT(10) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(7) < c_b)
                    if (FAST_PIXEL_AT(8) < c_b)
                      if (FAST_PIXEL_AT(9) < c_b)
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(6) < c_b)
                                if (FAST_PIXEL_AT(5) < c_b)
                                  goto is_a_corner;
                                else
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                              else
                                if (FAST_PIXEL_AT(14) < c_b)
                                  if (FAST_PIXEL_AT(15) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
            else if (FAST_PIXEL_AT(3) < c_b)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(7) < c_b)
                  if (FAST_PIXEL_AT(8) < c_b)
                    if (FAST_PIXEL_AT(9) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(6) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(4) < c_b)
                              goto is_a_corner;
                            else
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                if (FAST_PIXEL_AT(15) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                if (FAST_PIXEL_AT(9) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(7) < c_b)
                  if (FAST_PIXEL_AT(8) < c_b)
                    if (FAST_PIXEL_AT(9) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(5) < c_b)
                              if (FAST_PIXEL_AT(4) < c_b)
                                goto is_a_corner;
                              else
                                if (FAST_PIXEL_AT(13) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                if (FAST_PIXEL_AT(15) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
          else if (FAST_PIXEL_AT(2) < c_b)
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(7) < c_b)
                if (FAST_PIXEL_AT(8) < c_b)
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(5) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(3) < c_b)
                            goto is_a_corner;
                          else
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              if (FAST_PIXEL_AT(15) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              if (FAST_PIXEL_AT(8) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(7) < c_b)
                if (FAST_PIXEL_AT(8) < c_b)
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(4) < c_b)
                            if (FAST_PIXEL_AT(3) < c_b)
                              goto is_a_corner;
                            else
                              if (FAST_PIXEL_AT(12) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              if (FAST_PIXEL_AT(15) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
        else if (FAST_PIXEL_AT(1) < c_b)
          if (FAST_PIXEL_AT(8) > cb)
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(2) > cb)
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else if (FAST_PIXEL_AT(8) < c_b)
            if (FAST_PIXEL_AT(7) < c_b)
              if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(6) < c_b)
                  if (FAST_PIXEL_AT(5) < c_b)
                    if (FAST_PIXEL_AT(4) < c_b)
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(2) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(10) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(14) < c_b)
                            if (FAST_PIXEL_AT(15) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
        else
          if (FAST_PIXEL_AT(8) > cb)
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(15) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(2) > cb)
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(7) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else if (FAST_PIXEL_AT(8) < c_b)
            if (FAST_PIXEL_AT(7) < c_b)
              if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(6) < c_b)
                    if (FAST_PIXEL_AT(5) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(3) < c_b)
                          if (FAST_PIXEL_AT(2) < c_b)
                            goto is_a_corner;
                          else
                            if (FAST_PIXEL_AT(11) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(14) < c_b)
                            if (FAST_PIXEL_AT(15) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
      else if (FAST_PIXEL_AT(0) < c_b)
        if (FAST_PIXEL_AT(1) > cb)
          if (FAST_PIXEL_AT(8) > cb)
            if (FAST_PIXEL_AT(7) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(6) > cb)
                  if (FAST_PIXEL_AT(5) > cb)
                    if (FAST_PIXEL_AT(4) > cb)
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(2) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(10) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(14) > cb)
                            if (FAST_PIXEL_AT(15) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else if (FAST_PIXEL_AT(8) < c_b)
            if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(2) < c_b)
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
        else if (FAST_PIXEL_AT(1) < c_b)
          if (FAST_PIXEL_AT(2) > cb)
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(7) > cb)
                if (FAST_PIXEL_AT(8) > cb)
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(5) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(3) > cb)
                            goto is_a_corner;
                          else
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              if (FAST_PIXEL_AT(15) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else if (FAST_PIXEL_AT(2) < c_b)
            if (FAST_PIXEL_AT(3) > cb)
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(7) > cb)
                  if (FAST_PIXEL_AT(8) > cb)
                    if (FAST_PIXEL_AT(9) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(6) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(4) > cb)
                              goto is_a_corner;
                            else
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                if (FAST_PIXEL_AT(15) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else if (FAST_PIXEL_AT(3) < c_b)
              if (FAST_PIXEL_AT(4) > cb)
                if (FAST_PIXEL_AT(13) > cb)
                  if (FAST_PIXEL_AT(7) > cb)
                    if (FAST_PIXEL_AT(8) > cb)
                      if (FAST_PIXEL_AT(9) > cb)
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(6) > cb)
                                if (FAST_PIXEL_AT(5) > cb)
                                  goto is_a_corner;
                                else
                                  if (FAST_PIXEL_AT(14) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                              else
                                if (FAST_PIXEL_AT(14) > cb)
                                  if (FAST_PIXEL_AT(15) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else if (FAST_PIXEL_AT(13) < c_b)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(5) > cb)
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(5) > cb)
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else if (FAST_PIXEL_AT(4) < c_b)
                if (FAST_PIXEL_AT(5) > cb)
                  if (FAST_PIXEL_AT(14) > cb)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(8) > cb)
                        if (FAST_PIXEL_AT(9) > cb)
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  if (FAST_PIXEL_AT(6) > cb)
                                    goto is_a_corner;
                                  else
                                    if (FAST_PIXEL_AT(15) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(14) < c_b)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    if (FAST_PIXEL_AT(11) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else if (FAST_PIXEL_AT(5) < c_b)
                  if (FAST_PIXEL_AT(6) > cb)
                    if (FAST_PIXEL_AT(15) < c_b)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    if (FAST_PIXEL_AT(14) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    if (FAST_PIXEL_AT(14) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(6) < c_b)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(14) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    if (FAST_PIXEL_AT(15) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(8) < c_b)
                        goto is_a_corner;
                      else
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(13) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(14) > cb)
                                    if (FAST_PIXEL_AT(15) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(12) > cb)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(8) > cb)
                        if (FAST_PIXEL_AT(9) > cb)
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  if (FAST_PIXEL_AT(6) > cb)
                                    goto is_a_corner;
                                  else
                                    if (FAST_PIXEL_AT(15) > cb)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    if (FAST_PIXEL_AT(11) < c_b)
                                      goto is_a_corner;
                                    else
                                      goto is_not_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                if (FAST_PIXEL_AT(11) > cb)
                  if (FAST_PIXEL_AT(7) > cb)
                    if (FAST_PIXEL_AT(8) > cb)
                      if (FAST_PIXEL_AT(9) > cb)
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(6) > cb)
                                if (FAST_PIXEL_AT(5) > cb)
                                  goto is_a_corner;
                                else
                                  if (FAST_PIXEL_AT(14) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                              else
                                if (FAST_PIXEL_AT(14) > cb)
                                  if (FAST_PIXEL_AT(15) > cb)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  if (FAST_PIXEL_AT(10) < c_b)
                                    goto is_a_corner;
                                  else
                                    goto is_not_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
            else
              if (FAST_PIXEL_AT(10) > cb)
                if (FAST_PIXEL_AT(7) > cb)
                  if (FAST_PIXEL_AT(8) > cb)
                    if (FAST_PIXEL_AT(9) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(5) > cb)
                              if (FAST_PIXEL_AT(4) > cb)
                                goto is_a_corner;
                              else
                                if (FAST_PIXEL_AT(13) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                            else
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                if (FAST_PIXEL_AT(15) > cb)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                if (FAST_PIXEL_AT(9) < c_b)
                                  goto is_a_corner;
                                else
                                  goto is_not_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
          else
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(7) > cb)
                if (FAST_PIXEL_AT(8) > cb)
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(4) > cb)
                            if (FAST_PIXEL_AT(3) > cb)
                              goto is_a_corner;
                            else
                              if (FAST_PIXEL_AT(12) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                          else
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              if (FAST_PIXEL_AT(15) > cb)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              if (FAST_PIXEL_AT(8) < c_b)
                                goto is_a_corner;
                              else
                                goto is_not_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
        else
          if (FAST_PIXEL_AT(8) > cb)
            if (FAST_PIXEL_AT(7) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(6) > cb)
                    if (FAST_PIXEL_AT(5) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(3) > cb)
                          if (FAST_PIXEL_AT(2) > cb)
                            goto is_a_corner;
                          else
                            if (FAST_PIXEL_AT(11) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                        else
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(14) > cb)
                            if (FAST_PIXEL_AT(15) > cb)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else if (FAST_PIXEL_AT(8) < c_b)
            if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(10) < c_b)
                if (FAST_PIXEL_AT(11) < c_b)
                  if (FAST_PIXEL_AT(12) < c_b)
                    if (FAST_PIXEL_AT(13) < c_b)
                      if (FAST_PIXEL_AT(14) < c_b)
                        if (FAST_PIXEL_AT(15) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(2) < c_b)
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(7) < c_b)
                              goto is_a_corner;
                            else
                              goto is_not_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
      else
        if (FAST_PIXEL_AT(7) > cb)
          if (FAST_PIXEL_AT(8) > cb)
            if (FAST_PIXEL_AT(9) > cb)
              if (FAST_PIXEL_AT(6) > cb)
                if (FAST_PIXEL_AT(5) > cb)
                  if (FAST_PIXEL_AT(4) > cb)
                    if (FAST_PIXEL_AT(3) > cb)
                      if (FAST_PIXEL_AT(2) > cb)
                        if (FAST_PIXEL_AT(1) > cb)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(10) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(11) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(10) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(14) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
        else if (FAST_PIXEL_AT(7) < c_b)
          if (FAST_PIXEL_AT(8) < c_b)
            if (FAST_PIXEL_AT(9) < c_b)
              if (FAST_PIXEL_AT(6) < c_b)
                if (FAST_PIXEL_AT(5) < c_b)
                  if (FAST_PIXEL_AT(4) < c_b)
                    if (FAST_PIXEL_AT(3) < c_b)
                      if (FAST_PIXEL_AT(2) < c_b)
                        if (FAST_PIXEL_AT(1) < c_b)
                          goto is_a_corner;
                        else
                          if (FAST_PIXEL_AT(10) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                      else
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(11) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                    else
                      if (FAST_PIXEL_AT(10) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                  else
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                else
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(14) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
              else
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            goto is_a_corner;
                          else
                            goto is_not_a_corner;
                        else
                          goto is_not_a_corner;
                      else
                        goto is_not_a_corner;
                    else
                      goto is_not_a_corner;
                  else
                    goto is_not_a_corner;
                else
                  goto is_not_a_corner;
            else
              goto is_not_a_corner;
          else
            goto is_not_a_corner;
        else
          goto is_not_a_corner;

    is_a_corner:
      bmin=b;
      goto end_if;

    is_not_a_corner:
      bmax=b;
      goto end_if;

    end_if:

      if (bmin == bmax - 1 || bmin == bmax)
        return bmin;
      b = (bmin + bmax) / 2;
    }
}


template <class T, class U>
QVector<int> fast9_score(const PiiMatrix<T>& image,
                         const PiiMatrix<U>& corners,
                         const int pixel[],
                         typename Pii::Combine<T,int>::Type threshold)
{
  const int iRows = corners.rows();
  QVector<int> vecScores(iRows);

  for (int n = 0; n < iRows; ++n)
    {
      const U* pRow = corners[n];
      vecScores[n] = fast9_corner_score(image[int(pRow[1])] + int(pRow[0]), pixel, threshold);
    }

  return vecScores;
}


template <class T, class U>
void fast9_detect(const PiiMatrix<T>& image,
                  const int pixel[],
                  typename Pii::Combine<T,int>::Type threshold,
                  PiiMatrix<U>& coordinates)
{
  typedef typename Pii::Combine<T,int>::Type CalcType;
  const int iRows = image.rows(), iCols = image.columns();

  coordinates.reserve(512);

  for (int y=3; y < iRows - 3; y++)
    for (int x=3; x < iCols - 3; x++)
      {
        const T* p = image[y] + x;

        CalcType cb = *p + threshold;
        CalcType c_b= *p - threshold;
        if (FAST_PIXEL_AT(0) > cb)
          if (FAST_PIXEL_AT(1) > cb)
            if (FAST_PIXEL_AT(2) > cb)
              if (FAST_PIXEL_AT(3) > cb)
                if (FAST_PIXEL_AT(4) > cb)
                  if (FAST_PIXEL_AT(5) > cb)
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          {}
                        else
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            continue;
                      else if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            continue;
                        else if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    if (FAST_PIXEL_AT(13) < c_b)
                                      if (FAST_PIXEL_AT(15) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            continue;
                        else
                          continue;
                    else if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(15) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(14) > cb)
                            {}
                          else
                            continue;
                        else if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(7) < c_b)
                            if (FAST_PIXEL_AT(8) < c_b)
                              if (FAST_PIXEL_AT(9) < c_b)
                                if (FAST_PIXEL_AT(10) < c_b)
                                  if (FAST_PIXEL_AT(11) < c_b)
                                    if (FAST_PIXEL_AT(12) < c_b)
                                      if (FAST_PIXEL_AT(14) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    if (FAST_PIXEL_AT(13) < c_b)
                                      if (FAST_PIXEL_AT(14) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            continue;
                        else
                          continue;
                      else if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    if (FAST_PIXEL_AT(14) < c_b)
                                      if (FAST_PIXEL_AT(15) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else if (FAST_PIXEL_AT(5) < c_b)
                    if (FAST_PIXEL_AT(14) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      if (FAST_PIXEL_AT(11) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(6) < c_b)
                          if (FAST_PIXEL_AT(7) < c_b)
                            if (FAST_PIXEL_AT(8) < c_b)
                              if (FAST_PIXEL_AT(9) < c_b)
                                if (FAST_PIXEL_AT(10) < c_b)
                                  if (FAST_PIXEL_AT(11) < c_b)
                                    if (FAST_PIXEL_AT(13) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(14) < c_b)
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    if (FAST_PIXEL_AT(6) < c_b)
                                      {}
                                    else
                                      if (FAST_PIXEL_AT(15) < c_b)
                                        {}
                                      else
                                        continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    if (FAST_PIXEL_AT(13) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      if (FAST_PIXEL_AT(11) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          if (FAST_PIXEL_AT(9) < c_b)
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    if (FAST_PIXEL_AT(6) < c_b)
                                      {}
                                    else
                                      if (FAST_PIXEL_AT(15) < c_b)
                                        {}
                                      else
                                        continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else if (FAST_PIXEL_AT(4) < c_b)
                  if (FAST_PIXEL_AT(13) > cb)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(5) < c_b)
                        if (FAST_PIXEL_AT(6) < c_b)
                          if (FAST_PIXEL_AT(7) < c_b)
                            if (FAST_PIXEL_AT(8) < c_b)
                              if (FAST_PIXEL_AT(9) < c_b)
                                if (FAST_PIXEL_AT(10) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else if (FAST_PIXEL_AT(13) < c_b)
                    if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(8) < c_b)
                        if (FAST_PIXEL_AT(9) < c_b)
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(6) < c_b)
                                  if (FAST_PIXEL_AT(5) < c_b)
                                    {}
                                  else
                                    if (FAST_PIXEL_AT(14) < c_b)
                                      {}
                                    else
                                      continue;
                                else
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    if (FAST_PIXEL_AT(5) < c_b)
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(7) < c_b)
                          if (FAST_PIXEL_AT(8) < c_b)
                            if (FAST_PIXEL_AT(9) < c_b)
                              if (FAST_PIXEL_AT(10) < c_b)
                                if (FAST_PIXEL_AT(11) < c_b)
                                  if (FAST_PIXEL_AT(12) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    if (FAST_PIXEL_AT(10) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else
                      continue;
                  else if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(7) < c_b)
                      if (FAST_PIXEL_AT(8) < c_b)
                        if (FAST_PIXEL_AT(9) < c_b)
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(6) < c_b)
                                  if (FAST_PIXEL_AT(5) < c_b)
                                    {}
                                  else
                                    if (FAST_PIXEL_AT(14) < c_b)
                                      {}
                                    else
                                      continue;
                                else
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    if (FAST_PIXEL_AT(15) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
              else if (FAST_PIXEL_AT(3) < c_b)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(7) < c_b)
                    if (FAST_PIXEL_AT(8) < c_b)
                      if (FAST_PIXEL_AT(9) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(6) < c_b)
                            if (FAST_PIXEL_AT(5) < c_b)
                              if (FAST_PIXEL_AT(4) < c_b)
                                {}
                              else
                                if (FAST_PIXEL_AT(12) < c_b)
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  if (FAST_PIXEL_AT(15) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  if (FAST_PIXEL_AT(9) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(7) < c_b)
                    if (FAST_PIXEL_AT(8) < c_b)
                      if (FAST_PIXEL_AT(9) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(5) < c_b)
                                if (FAST_PIXEL_AT(4) < c_b)
                                  {}
                                else
                                  if (FAST_PIXEL_AT(13) < c_b)
                                    {}
                                  else
                                    continue;
                              else
                                if (FAST_PIXEL_AT(13) < c_b)
                                  if (FAST_PIXEL_AT(14) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  if (FAST_PIXEL_AT(15) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
            else if (FAST_PIXEL_AT(2) < c_b)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(7) < c_b)
                  if (FAST_PIXEL_AT(8) < c_b)
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(6) < c_b)
                        if (FAST_PIXEL_AT(5) < c_b)
                          if (FAST_PIXEL_AT(4) < c_b)
                            if (FAST_PIXEL_AT(3) < c_b)
                              {}
                            else
                              if (FAST_PIXEL_AT(11) < c_b)
                                if (FAST_PIXEL_AT(12) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                if (FAST_PIXEL_AT(15) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
            else
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                if (FAST_PIXEL_AT(8) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(7) < c_b)
                  if (FAST_PIXEL_AT(8) < c_b)
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(6) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(4) < c_b)
                              if (FAST_PIXEL_AT(3) < c_b)
                                {}
                              else
                                if (FAST_PIXEL_AT(12) < c_b)
                                  {}
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(12) < c_b)
                                if (FAST_PIXEL_AT(13) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                if (FAST_PIXEL_AT(14) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                if (FAST_PIXEL_AT(15) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
          else if (FAST_PIXEL_AT(1) < c_b)
            if (FAST_PIXEL_AT(8) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(2) > cb)
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else if (FAST_PIXEL_AT(8) < c_b)
              if (FAST_PIXEL_AT(7) < c_b)
                if (FAST_PIXEL_AT(9) < c_b)
                  if (FAST_PIXEL_AT(6) < c_b)
                    if (FAST_PIXEL_AT(5) < c_b)
                      if (FAST_PIXEL_AT(4) < c_b)
                        if (FAST_PIXEL_AT(3) < c_b)
                          if (FAST_PIXEL_AT(2) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(10) < c_b)
                              if (FAST_PIXEL_AT(11) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(10) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              if (FAST_PIXEL_AT(15) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else
              continue;
          else
            if (FAST_PIXEL_AT(8) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(15) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(2) > cb)
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(7) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else if (FAST_PIXEL_AT(8) < c_b)
              if (FAST_PIXEL_AT(7) < c_b)
                if (FAST_PIXEL_AT(9) < c_b)
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(5) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(3) < c_b)
                            if (FAST_PIXEL_AT(2) < c_b)
                              {}
                            else
                              if (FAST_PIXEL_AT(11) < c_b)
                                {}
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(11) < c_b)
                              if (FAST_PIXEL_AT(12) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              if (FAST_PIXEL_AT(13) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              if (FAST_PIXEL_AT(14) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              if (FAST_PIXEL_AT(15) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
            else
              continue;
        else if (FAST_PIXEL_AT(0) < c_b)
          if (FAST_PIXEL_AT(1) > cb)
            if (FAST_PIXEL_AT(8) > cb)
              if (FAST_PIXEL_AT(7) > cb)
                if (FAST_PIXEL_AT(9) > cb)
                  if (FAST_PIXEL_AT(6) > cb)
                    if (FAST_PIXEL_AT(5) > cb)
                      if (FAST_PIXEL_AT(4) > cb)
                        if (FAST_PIXEL_AT(3) > cb)
                          if (FAST_PIXEL_AT(2) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(10) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              if (FAST_PIXEL_AT(15) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else if (FAST_PIXEL_AT(8) < c_b)
              if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(2) < c_b)
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else
              continue;
          else if (FAST_PIXEL_AT(1) < c_b)
            if (FAST_PIXEL_AT(2) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(7) > cb)
                  if (FAST_PIXEL_AT(8) > cb)
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(5) > cb)
                          if (FAST_PIXEL_AT(4) > cb)
                            if (FAST_PIXEL_AT(3) > cb)
                              {}
                            else
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                if (FAST_PIXEL_AT(15) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
            else if (FAST_PIXEL_AT(2) < c_b)
              if (FAST_PIXEL_AT(3) > cb)
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(7) > cb)
                    if (FAST_PIXEL_AT(8) > cb)
                      if (FAST_PIXEL_AT(9) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(6) > cb)
                            if (FAST_PIXEL_AT(5) > cb)
                              if (FAST_PIXEL_AT(4) > cb)
                                {}
                              else
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  if (FAST_PIXEL_AT(14) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  if (FAST_PIXEL_AT(15) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else if (FAST_PIXEL_AT(3) < c_b)
                if (FAST_PIXEL_AT(4) > cb)
                  if (FAST_PIXEL_AT(13) > cb)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(8) > cb)
                        if (FAST_PIXEL_AT(9) > cb)
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(6) > cb)
                                  if (FAST_PIXEL_AT(5) > cb)
                                    {}
                                  else
                                    if (FAST_PIXEL_AT(14) > cb)
                                      {}
                                    else
                                      continue;
                                else
                                  if (FAST_PIXEL_AT(14) > cb)
                                    if (FAST_PIXEL_AT(15) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else if (FAST_PIXEL_AT(13) < c_b)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(5) > cb)
                        if (FAST_PIXEL_AT(6) > cb)
                          if (FAST_PIXEL_AT(7) > cb)
                            if (FAST_PIXEL_AT(8) > cb)
                              if (FAST_PIXEL_AT(9) > cb)
                                if (FAST_PIXEL_AT(10) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    if (FAST_PIXEL_AT(5) > cb)
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else if (FAST_PIXEL_AT(4) < c_b)
                  if (FAST_PIXEL_AT(5) > cb)
                    if (FAST_PIXEL_AT(14) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(12) > cb)
                                  if (FAST_PIXEL_AT(13) > cb)
                                    if (FAST_PIXEL_AT(6) > cb)
                                      {}
                                    else
                                      if (FAST_PIXEL_AT(15) > cb)
                                        {}
                                      else
                                        continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(14) < c_b)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(6) > cb)
                          if (FAST_PIXEL_AT(7) > cb)
                            if (FAST_PIXEL_AT(8) > cb)
                              if (FAST_PIXEL_AT(9) > cb)
                                if (FAST_PIXEL_AT(10) > cb)
                                  if (FAST_PIXEL_AT(11) > cb)
                                    if (FAST_PIXEL_AT(13) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      if (FAST_PIXEL_AT(11) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      if (FAST_PIXEL_AT(6) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    if (FAST_PIXEL_AT(13) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else if (FAST_PIXEL_AT(5) < c_b)
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(15) < c_b)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(7) > cb)
                            if (FAST_PIXEL_AT(8) > cb)
                              if (FAST_PIXEL_AT(9) > cb)
                                if (FAST_PIXEL_AT(10) > cb)
                                  if (FAST_PIXEL_AT(11) > cb)
                                    if (FAST_PIXEL_AT(12) > cb)
                                      if (FAST_PIXEL_AT(14) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(14) < c_b)
                            {}
                          else
                            continue;
                        else
                          continue;
                      else
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    if (FAST_PIXEL_AT(13) > cb)
                                      if (FAST_PIXEL_AT(14) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else if (FAST_PIXEL_AT(6) < c_b)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(14) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    if (FAST_PIXEL_AT(13) > cb)
                                      if (FAST_PIXEL_AT(15) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            continue;
                        else
                          continue;
                      else if (FAST_PIXEL_AT(7) < c_b)
                        if (FAST_PIXEL_AT(8) < c_b)
                          {}
                        else
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(13) > cb)
                        if (FAST_PIXEL_AT(7) > cb)
                          if (FAST_PIXEL_AT(8) > cb)
                            if (FAST_PIXEL_AT(9) > cb)
                              if (FAST_PIXEL_AT(10) > cb)
                                if (FAST_PIXEL_AT(11) > cb)
                                  if (FAST_PIXEL_AT(12) > cb)
                                    if (FAST_PIXEL_AT(14) > cb)
                                      if (FAST_PIXEL_AT(15) > cb)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(12) > cb)
                      if (FAST_PIXEL_AT(7) > cb)
                        if (FAST_PIXEL_AT(8) > cb)
                          if (FAST_PIXEL_AT(9) > cb)
                            if (FAST_PIXEL_AT(10) > cb)
                              if (FAST_PIXEL_AT(11) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  if (FAST_PIXEL_AT(14) > cb)
                                    if (FAST_PIXEL_AT(6) > cb)
                                      {}
                                    else
                                      if (FAST_PIXEL_AT(15) > cb)
                                        {}
                                      else
                                        continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      if (FAST_PIXEL_AT(11) < c_b)
                                        {}
                                      else
                                        continue;
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  if (FAST_PIXEL_AT(11) > cb)
                    if (FAST_PIXEL_AT(7) > cb)
                      if (FAST_PIXEL_AT(8) > cb)
                        if (FAST_PIXEL_AT(9) > cb)
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(6) > cb)
                                  if (FAST_PIXEL_AT(5) > cb)
                                    {}
                                  else
                                    if (FAST_PIXEL_AT(14) > cb)
                                      {}
                                    else
                                      continue;
                                else
                                  if (FAST_PIXEL_AT(14) > cb)
                                    if (FAST_PIXEL_AT(15) > cb)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    if (FAST_PIXEL_AT(10) < c_b)
                                      {}
                                    else
                                      continue;
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
              else
                if (FAST_PIXEL_AT(10) > cb)
                  if (FAST_PIXEL_AT(7) > cb)
                    if (FAST_PIXEL_AT(8) > cb)
                      if (FAST_PIXEL_AT(9) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(6) > cb)
                              if (FAST_PIXEL_AT(5) > cb)
                                if (FAST_PIXEL_AT(4) > cb)
                                  {}
                                else
                                  if (FAST_PIXEL_AT(13) > cb)
                                    {}
                                  else
                                    continue;
                              else
                                if (FAST_PIXEL_AT(13) > cb)
                                  if (FAST_PIXEL_AT(14) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  if (FAST_PIXEL_AT(15) > cb)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  if (FAST_PIXEL_AT(9) < c_b)
                                    {}
                                  else
                                    continue;
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
            else
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(7) > cb)
                  if (FAST_PIXEL_AT(8) > cb)
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(6) > cb)
                          if (FAST_PIXEL_AT(5) > cb)
                            if (FAST_PIXEL_AT(4) > cb)
                              if (FAST_PIXEL_AT(3) > cb)
                                {}
                              else
                                if (FAST_PIXEL_AT(12) > cb)
                                  {}
                                else
                                  continue;
                            else
                              if (FAST_PIXEL_AT(12) > cb)
                                if (FAST_PIXEL_AT(13) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                if (FAST_PIXEL_AT(14) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                if (FAST_PIXEL_AT(15) > cb)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
                else
                  continue;
              else if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                if (FAST_PIXEL_AT(8) < c_b)
                                  {}
                                else
                                  continue;
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
          else
            if (FAST_PIXEL_AT(8) > cb)
              if (FAST_PIXEL_AT(7) > cb)
                if (FAST_PIXEL_AT(9) > cb)
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(6) > cb)
                      if (FAST_PIXEL_AT(5) > cb)
                        if (FAST_PIXEL_AT(4) > cb)
                          if (FAST_PIXEL_AT(3) > cb)
                            if (FAST_PIXEL_AT(2) > cb)
                              {}
                            else
                              if (FAST_PIXEL_AT(11) > cb)
                                {}
                              else
                                continue;
                          else
                            if (FAST_PIXEL_AT(11) > cb)
                              if (FAST_PIXEL_AT(12) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              if (FAST_PIXEL_AT(13) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              if (FAST_PIXEL_AT(14) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              if (FAST_PIXEL_AT(15) > cb)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    continue;
                else
                  continue;
              else
                continue;
            else if (FAST_PIXEL_AT(8) < c_b)
              if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(10) < c_b)
                  if (FAST_PIXEL_AT(11) < c_b)
                    if (FAST_PIXEL_AT(12) < c_b)
                      if (FAST_PIXEL_AT(13) < c_b)
                        if (FAST_PIXEL_AT(14) < c_b)
                          if (FAST_PIXEL_AT(15) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(2) < c_b)
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(4) < c_b)
                          if (FAST_PIXEL_AT(5) < c_b)
                            if (FAST_PIXEL_AT(6) < c_b)
                              if (FAST_PIXEL_AT(7) < c_b)
                                {}
                              else
                                continue;
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  continue;
              else
                continue;
            else
              continue;
        else
          if (FAST_PIXEL_AT(7) > cb)
            if (FAST_PIXEL_AT(8) > cb)
              if (FAST_PIXEL_AT(9) > cb)
                if (FAST_PIXEL_AT(6) > cb)
                  if (FAST_PIXEL_AT(5) > cb)
                    if (FAST_PIXEL_AT(4) > cb)
                      if (FAST_PIXEL_AT(3) > cb)
                        if (FAST_PIXEL_AT(2) > cb)
                          if (FAST_PIXEL_AT(1) > cb)
                            {}
                          else
                            if (FAST_PIXEL_AT(10) > cb)
                              {}
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(10) > cb)
                            if (FAST_PIXEL_AT(11) > cb)
                              {}
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(10) > cb)
                          if (FAST_PIXEL_AT(11) > cb)
                            if (FAST_PIXEL_AT(12) > cb)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(10) > cb)
                        if (FAST_PIXEL_AT(11) > cb)
                          if (FAST_PIXEL_AT(12) > cb)
                            if (FAST_PIXEL_AT(13) > cb)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(10) > cb)
                      if (FAST_PIXEL_AT(11) > cb)
                        if (FAST_PIXEL_AT(12) > cb)
                          if (FAST_PIXEL_AT(13) > cb)
                            if (FAST_PIXEL_AT(14) > cb)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  if (FAST_PIXEL_AT(10) > cb)
                    if (FAST_PIXEL_AT(11) > cb)
                      if (FAST_PIXEL_AT(12) > cb)
                        if (FAST_PIXEL_AT(13) > cb)
                          if (FAST_PIXEL_AT(14) > cb)
                            if (FAST_PIXEL_AT(15) > cb)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
              else
                continue;
            else
              continue;
          else if (FAST_PIXEL_AT(7) < c_b)
            if (FAST_PIXEL_AT(8) < c_b)
              if (FAST_PIXEL_AT(9) < c_b)
                if (FAST_PIXEL_AT(6) < c_b)
                  if (FAST_PIXEL_AT(5) < c_b)
                    if (FAST_PIXEL_AT(4) < c_b)
                      if (FAST_PIXEL_AT(3) < c_b)
                        if (FAST_PIXEL_AT(2) < c_b)
                          if (FAST_PIXEL_AT(1) < c_b)
                            {}
                          else
                            if (FAST_PIXEL_AT(10) < c_b)
                              {}
                            else
                              continue;
                        else
                          if (FAST_PIXEL_AT(10) < c_b)
                            if (FAST_PIXEL_AT(11) < c_b)
                              {}
                            else
                              continue;
                          else
                            continue;
                      else
                        if (FAST_PIXEL_AT(10) < c_b)
                          if (FAST_PIXEL_AT(11) < c_b)
                            if (FAST_PIXEL_AT(12) < c_b)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                    else
                      if (FAST_PIXEL_AT(10) < c_b)
                        if (FAST_PIXEL_AT(11) < c_b)
                          if (FAST_PIXEL_AT(12) < c_b)
                            if (FAST_PIXEL_AT(13) < c_b)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                  else
                    if (FAST_PIXEL_AT(10) < c_b)
                      if (FAST_PIXEL_AT(11) < c_b)
                        if (FAST_PIXEL_AT(12) < c_b)
                          if (FAST_PIXEL_AT(13) < c_b)
                            if (FAST_PIXEL_AT(14) < c_b)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                else
                  if (FAST_PIXEL_AT(10) < c_b)
                    if (FAST_PIXEL_AT(11) < c_b)
                      if (FAST_PIXEL_AT(12) < c_b)
                        if (FAST_PIXEL_AT(13) < c_b)
                          if (FAST_PIXEL_AT(14) < c_b)
                            if (FAST_PIXEL_AT(15) < c_b)
                              {}
                            else
                              continue;
                          else
                            continue;
                        else
                          continue;
                      else
                        continue;
                    else
                      continue;
                  else
                    continue;
              else
                continue;
            else
              continue;
          else
            continue;
        U* pRow = coordinates.appendRow();
        pRow[0] = x;
        pRow[1] = y;
      }
}
