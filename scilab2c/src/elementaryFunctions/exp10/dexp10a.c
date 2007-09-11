/*
**  -*- C -*-
**
** dexp10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Thu Sep  6 16:57:38 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp10.h"

void dexp10a(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dexp10s(x[i]);
  }
}
