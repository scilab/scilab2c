/*
**  -*- C -*-
**
** ccosha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Wed Jan 31 11:14:37 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

floatComplex ccoshs(floatComplex);

void ccosha(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ccoshs(x[i]);
  }
}
