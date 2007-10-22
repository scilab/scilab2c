/*
**  -*- C -*-
**
** zsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:02:04 2006 jofret
** Last update Mon Oct 22 09:50:21 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void zsinha(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zsinhs(x[i]);
  }
}
