/*
**  -*- C -*-
**
** dsina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Mon Oct 22 09:51:01 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sin.h"

void dsina(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsins(x[i]);
  }
}
