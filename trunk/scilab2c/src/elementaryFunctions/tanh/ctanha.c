/*
**  -*- C -*-
**
** ctanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Fri Feb 23 17:32:04 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void ctanha(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ctanhs(x[i]);
  }
}
