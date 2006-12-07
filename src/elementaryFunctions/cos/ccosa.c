/*
**  -*- C -*-
**
** ccosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Thu Dec  7 17:15:29 2006 jofret
**
** Copyright INRIA 2006
*/


#ifndef STDC99
#include "floatComplex.h"
#else
#include <complex.h>
typedef float complex floatComplex;
#endif

floatComplex ccoss(floatComplex);

void ccosa(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ccoss(x[i]);
  }
}
