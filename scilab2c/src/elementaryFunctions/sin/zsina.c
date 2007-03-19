/*
**  -*- C -*-
**
** zsina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:02:04 2006 jofret
** Last update Mon Mar 19 11:36:29 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"

void zsina(doubleComplex* x, doubleComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zsins(x[i]);
  }
}
