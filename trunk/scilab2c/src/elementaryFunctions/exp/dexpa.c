/*
**  -*- C -*-
**
** dexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Mar 19 11:34:48 2007 jofret
**
** Copyright INRIA 2006
*/

#include "exp.h"

void dexpa(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dexps(x[i]);
  }
}
