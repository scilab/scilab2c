/*
**  -*- C -*-
**
** dsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Mon Mar 19 11:32:24 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void dsinha(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsinhs(x[i]);
  }
}
