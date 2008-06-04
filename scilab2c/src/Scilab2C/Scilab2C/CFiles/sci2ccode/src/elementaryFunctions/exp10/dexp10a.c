/*
**  -*- C -*-
**
** dexp10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Oct 22 09:53:56 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp10.h"

void dexp10a(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dexp10s(x[i]);
  }
}
