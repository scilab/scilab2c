/*
**  -*- C -*-
**
** dsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Fri Feb 23 17:17:29 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void dsinha(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsinhs(x[i]);
  }
}
