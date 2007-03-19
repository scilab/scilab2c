/*
**  -*- C -*-
**
** csina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 13:07:37 2006 jofret
** Last update Mon Mar 19 11:36:02 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"

void csina(floatComplex* x, floatComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csins(x[i]);
  }
}
