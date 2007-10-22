/*
**  -*- C -*-
**
** csinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Mon Oct 22 09:50:51 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void csinha(floatComplex* x, int size, floatComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csinhs(x[i]);
  }
}
