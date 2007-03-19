/*
**  -*- C -*-
**
** csinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Mon Mar 19 11:32:14 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void csinha(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csinhs(x[i]);
  }
}
