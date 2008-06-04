/*
**  -*- C -*-
**
** zatana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Mon Oct 22 09:56:00 2007 bruno
**
** Copyright INRIA 2006
*/

#include "atan.h"

void zatana(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zatans(x[i]);
  }
}
