/*
**  -*- C -*-
**
** ccosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Fri Feb 23 16:16:05 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"

void ccosa(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ccoss(x[i]);
  }
}
