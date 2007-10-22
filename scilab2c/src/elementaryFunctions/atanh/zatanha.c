/*
**  -*- C -*-
**
** zatanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Mon Oct 22 09:56:21 2007 bruno
**
** Copyright INRIA 2006
*/

#include "atanh.h"

void zatanha(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zatanhs(x[i]);
  }
}
