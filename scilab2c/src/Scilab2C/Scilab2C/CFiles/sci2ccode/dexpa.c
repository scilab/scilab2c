/*
**  -*- C -*-
**
** dexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Oct 22 09:53:15 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp.h"

void dexpa(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dexps(x[i]);
  }
}
