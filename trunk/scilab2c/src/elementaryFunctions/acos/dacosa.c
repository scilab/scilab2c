/*
**  -*- C -*-
**
** dacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Mon Mar 19 11:29:03 2007 jofret
**
** Copyright INRIA 2007
*/

#include "acos.h"

void dacosa(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dacoss(x[i]);
  }
}
