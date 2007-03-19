/*
**  -*- C -*-
**
** ctanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Mon Mar 19 11:33:54 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void ctanha(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ctanhs(x[i]);
  }
}
