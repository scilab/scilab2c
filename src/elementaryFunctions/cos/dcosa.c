/*
**  -*- C -*-
**
** dcosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Fri Feb 23 16:15:34 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"

void dcosa(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dcoss(x[i]);
  }
}
