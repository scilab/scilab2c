/*
**  -*- C -*-
**
** casina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:23:49 2007 jofret
** Last update Mon Oct 22 09:58:38 2007 bruno
**
** Copyright INRIA 2007
*/

#include "asin.h"

void casina(floatComplex* x, int size, floatComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = casins(x[i]);
  }
}
