/*
**  -*- C -*-
**
** stanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Fri Feb 23 17:30:54 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"

void stanha(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = stanhs(x[i]);
  }
}
