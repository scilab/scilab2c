/*
**  -*- C -*-
**
** ztana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Wed Jan 31 10:55:53 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

doubleComplex ztans(doubleComplex);

void ztana(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ztans(x[i]);
  }
}
