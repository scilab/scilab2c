/*
**  -*- C -*-
**
** cacosha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:23:49 2007 jofret
** Last update Thu Sep  6 10:44:18 2007 bruno
**
** Copyright INRIA 2007
*/

#include "acosh.h"

void cacosha(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = cacoshs(x[i]);
  }
}
