/*
**  -*- C -*-
**
** zatanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Thu Sep  6 15:09:32 2007 bruno
**
** Copyright INRIA 2006
*/

#include "atanh.h"

void zatanha(doubleComplex* x, doubleComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zatanhs(x[i]);
  }
}
