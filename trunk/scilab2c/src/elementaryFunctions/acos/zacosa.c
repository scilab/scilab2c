/*
**  -*- C -*-
**
** zacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:14 2007 jofret
** Last update Fri Jan  5 10:25:34 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef STDC99
#include "doubleComplex.h"
#else
#include <complex.h>
typedef double complex doubleComplex;
#endif

doubleComplex zacoss(doubleComplex);

void zacosa(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zacoss(x[i]);
  }
}
