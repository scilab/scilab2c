/*
**  -*- C -*-
**
** dtanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Mar 19 11:34:04 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void dtanha(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dtanhs(x[i]);
  }
}
