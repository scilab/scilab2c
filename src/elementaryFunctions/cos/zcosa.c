/*
**  -*- C -*-
**
** zcosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Fri Feb 23 16:24:10 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"

void zcosa(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zcoss(x[i]);
  }
}
