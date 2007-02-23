/*
**  -*- C -*-
**
** ssina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 10:52:14 2006 jofret
** Last update Fri Feb 23 17:11:53 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"

void ssina(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssins(x[i]);
  }
}
