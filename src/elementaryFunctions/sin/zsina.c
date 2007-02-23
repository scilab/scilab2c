/*
**  -*- C -*-
**
** zsina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:02:04 2006 jofret
** Last update Fri Feb 23 17:11:40 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"

void zsina(doubleComplex* x, int strideX, doubleComplex* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zsins(x[i]);
  }
}
