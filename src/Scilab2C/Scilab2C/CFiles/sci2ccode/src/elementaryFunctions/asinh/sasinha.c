/*
**  -*- C -*-
**
** sasinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Mon Oct 22 09:57:55 2007 bruno
**
** Copyright INRIA 2007
*/

#include "asinh.h"

void sasinha(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sasinhs(x[i]);
  }
}
