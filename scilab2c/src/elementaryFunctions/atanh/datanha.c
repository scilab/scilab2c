/*
**  -*- C -*-
**
** datanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Thu Sep  6 15:12:16 2007 bruno
**
** Copyright INRIA 2006
*/

#include "atanh.h"

void datanha(double* x, double* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = datanhs(x[i]);
  }
}
