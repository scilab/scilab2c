/*
**  -*- C -*-
**
** csinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Fri Feb 23 17:17:56 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void csinha(floatComplex* x, int strideX, floatComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csinhs(x[i]);
  }
}
