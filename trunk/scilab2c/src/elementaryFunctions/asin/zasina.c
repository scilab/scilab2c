/*
**  -*- C -*-
**
** zasina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:14 2007 jofret
** Last update Wed Jan 31 11:15:10 2007 jofret
**
** Copyright INRIA 2007
*/

#include "doubleComplex.h"

doubleComplex zasins(doubleComplex);

void zasina(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zasins(x[i]);
  }
}
