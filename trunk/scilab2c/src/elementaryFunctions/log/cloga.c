/*
**  -*- C -*-
**
** cloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:32:52 2007 bruno
** Last update Fri Sep  7 10:37:56 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void cloga(floatComplex* in, floatComplex* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = clogs(in[i]);
  }
}
