/*
**  -*- C -*-
**
** zsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:02:04 2006 jofret
** Last update Wed Jan 31 11:12:30 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

doubleComplex	zsinhs(doubleComplex);

void zsinha(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zsinhs(x[i]);
  }
}
