/*
**  -*- C -*-
**
** ccosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:24 2006 jofret
** Last update Mon Mar 19 11:30:33 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"

void ccosa(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ccoss(x[i]);
  }
}
