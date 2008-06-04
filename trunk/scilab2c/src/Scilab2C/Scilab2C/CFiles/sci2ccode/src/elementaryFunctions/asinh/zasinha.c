/*
**  -*- C -*-
**
** zasinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:14 2007 jofret
** Last update Mon Oct 22 09:57:45 2007 bruno
**
** Copyright INRIA 2007
*/

#include "asinh.h"

void zasinha(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zasinhs(x[i]);
  }
}
