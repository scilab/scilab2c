/*
**  -*- C -*-
**
** dacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Mon Oct 22 09:59:52 2007 bruno
**
** Copyright INRIA 2007
*/

#include "acos.h"

void dacosa(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dacoss(x[i]);
  }
}
