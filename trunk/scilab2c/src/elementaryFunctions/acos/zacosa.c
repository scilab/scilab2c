/*
**  -*- C -*-
**
** zacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:14 2007 jofret
** Last update Fri Feb 23 16:36:26 2007 jofret
**
** Copyright INRIA 2007
*/

#include "acos.h"

void zacosa(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zacoss(x[i]);
  }
}
