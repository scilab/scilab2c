/*
**  -*- C -*-
**
** zcosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Thu Dec  7 17:18:38 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef STDC99
#include "doubleComplex.h"
#else
#include <complex.h>
typedef double complex doubleComplex;
#endif

doubleComplex zcoss(doubleComplex);

void zcosa(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zcoss(x[i]);
  }
}
