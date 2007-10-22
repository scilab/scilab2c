/*
**  -*- C -*-
**
** dtanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Oct 22 09:46:56 2007 bruno
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void dtanha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dtanhs(x[i]);
  }
}
