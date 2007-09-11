/*
**  -*- C -*-
**
** zacosha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:14 2007 jofret
** Last update Thu Sep  6 10:42:27 2007 bruno
**
** Copyright INRIA 2007
*/

#include "acosh.h"

void zacosha(doubleComplex* x, doubleComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zacoshs(x[i]);
  }
}
