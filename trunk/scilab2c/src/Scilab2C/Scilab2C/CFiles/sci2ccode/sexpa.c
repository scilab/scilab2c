/*
**  -*- C -*-
**
** sexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Mon Oct 22 09:53:06 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp.h"

void sexpa(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sexps(x[i]);
  }
}
