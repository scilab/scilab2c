/*
**  -*- C -*-
**
** ztana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Mon Mar 19 11:33:44 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tan.h"

void ztana(doubleComplex* x, doubleComplex* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ztans(x[i]);
  }
}
