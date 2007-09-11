/*
**  -*- C -*-
**
** dloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:31:35 2007 bruno
** Last update Fri Sep  7 10:32:23 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void dloga(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = slogs(x[i]);
  }
}
