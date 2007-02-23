/*
**  -*- C -*-
**
** cacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:23:49 2007 jofret
** Last update Fri Feb 23 16:37:20 2007 jofret
**
** Copyright INRIA 2007
*/

#include "acos.h"

void cacosa(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = cacoss(x[i]);
  }
}
