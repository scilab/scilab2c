/*
**  -*- C -*-
**
** ctanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Mon Oct 22 09:47:06 2007 bruno
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void ctanha(floatComplex* x, int size, floatComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ctanhs(x[i]);
  }
}
