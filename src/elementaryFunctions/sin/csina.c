/*
**  -*- C -*-
**
** csina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Fri Dec  8 14:01:46 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef STDC99
#include "floatComplex.h"
#else
#include <complex.h>
typedef float complex floatComplex;
#endif

floatComplex csins(floatComplex);

void csina(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csins(x[i]);
  }
}
