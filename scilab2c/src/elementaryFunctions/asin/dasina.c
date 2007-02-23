/*
**  -*- C -*-
**
** dasina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Fri Feb 23 16:39:54 2007 jofret
**
** Copyright INRIA 2007
*/

#include "asin.h"

void dasina(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dasins(x[i]);
  }
}
