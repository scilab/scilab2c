/*
**  -*- C -*-
**
** csina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Wed Jan 31 11:13:10 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

floatComplex csins(floatComplex);

void csina(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csins(x[i]);
  }
}
