/*
**  -*- C -*-
**
** zloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:38:10 2007 bruno
** Last update Mon Oct 22 09:51:22 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void zloga(doubleComplex* in, int size, doubleComplex* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = zlogs(in[i]);
  }
}
