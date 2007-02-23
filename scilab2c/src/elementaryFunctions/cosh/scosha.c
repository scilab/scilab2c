/*
**  -*- C -*-
**
** scosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Fri Feb 23 16:46:14 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cosh.h"

void scosha(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = scoshs(x[i]);
  }
}
