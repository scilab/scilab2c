/*
**  -*- C -*-
**
** ztanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Fri Feb 23 17:30:40 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void ztanha(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ztanhs(x[i]);
  }
}
