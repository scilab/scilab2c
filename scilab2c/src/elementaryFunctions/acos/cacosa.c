/*
**  -*- C -*-
**
** cacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:23:49 2007 jofret
** Last update Mon Mar 19 11:29:15 2007 jofret
**
** Copyright INRIA 2007
*/

#include "acos.h"

void cacosa(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = cacoss(x[i]);
  }
}
