/*
**  -*- C -*-
**
** dloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:31:35 2007 bruno
** Last update Mon Oct 22 09:51:49 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void dloga(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = slogs(x[i]);
  }
}
