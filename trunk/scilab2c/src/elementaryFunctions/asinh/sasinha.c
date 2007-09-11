/*
**  -*- C -*-
**
** sasinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Thu Sep  6 11:21:13 2007 bruno
**
** Copyright INRIA 2007
*/

#include "asinh.h"

void sasinha(float* x, float* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sasinhs(x[i]);
  }
}
