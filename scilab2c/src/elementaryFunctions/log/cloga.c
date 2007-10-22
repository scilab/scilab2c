/*
**  -*- C -*-
**
** cloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:32:52 2007 bruno
** Last update Mon Oct 22 09:52:01 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void cloga(floatComplex* in, int size, floatComplex* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = clogs(in[i]);
  }
}
