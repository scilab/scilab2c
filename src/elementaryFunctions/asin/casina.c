/*
**  -*- C -*-
**
** casina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:23:49 2007 jofret
** Last update Fri Jan  5 16:24:19 2007 jofret
**
** Copyright INRIA 2007
*/



#ifndef STDC99
#include "floatComplex.h"
#else
#include <complex.h>
typedef float complex floatComplex;
#endif

floatComplex casins(floatComplex);

void casina(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = casins(x[i]);
  }
}
