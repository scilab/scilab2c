/*
**  -*- C -*-
**
** zloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:38:10 2007 bruno
** Last update Fri Sep  7 10:38:57 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void zloga(doubleComplex* in, doubleComplex* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = zlogs(in[i]);
  }
}
