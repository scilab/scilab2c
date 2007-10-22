/*
**  -*- C -*-
**
** dasinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Mon Oct 22 09:58:05 2007 bruno
**
** Copyright INRIA 2007
*/

#include "asinh.h"

void dasinha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dasinhs(x[i]);
  }
}
