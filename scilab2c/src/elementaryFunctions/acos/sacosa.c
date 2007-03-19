/*
**  -*- C -*-
**
** sacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Mon Mar 19 11:28:52 2007 jofret
**
** Copyright INRIA 2007
*/

#include "acos.h"

void sacosa(float* x, float* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sacoss(x[i]);
  }
}
