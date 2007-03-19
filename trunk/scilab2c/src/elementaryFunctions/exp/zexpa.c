/*
**  -*- C -*-
**
** zexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Mon Mar 19 11:35:12 2007 jofret
**
** Copyright INRIA 2006
*/

#include "exp.h"

void zexpa(doubleComplex* x, doubleComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zexps(x[i]);
  }
}
