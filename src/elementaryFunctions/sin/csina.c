/*
**  -*- C -*-
**
** csina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Mon Oct 22 09:51:11 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sin.h"

void csina(floatComplex* x, int size, floatComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csins(x[i]);
  }
}
