/*
**  -*- C -*-
**
** dsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Mon Oct 22 09:50:41 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void dsinha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsinhs(x[i]);
  }
}
