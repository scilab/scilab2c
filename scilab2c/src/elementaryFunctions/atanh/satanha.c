/*
**  -*- C -*-
**
** satanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Thu Sep  6 15:10:59 2007 bruno
**
** Copyright INRIA 2006
*/

#include "atanh.h"

void satanha(float* x, float* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = satanhs(x[i]);
  }
}
