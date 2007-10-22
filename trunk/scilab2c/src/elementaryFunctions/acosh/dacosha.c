/*
**  -*- C -*-
**
** dacosha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Mon Oct 22 09:59:29 2007 bruno
**
** Copyright INRIA 2007
*/

#include "acosh.h"

void dacosha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dacoshs(x[i]);
  }
}
