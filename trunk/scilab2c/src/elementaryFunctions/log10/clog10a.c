/*
**  -*- C -*-
**
** clog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:23:40 2007 bruno
** Last update Fri Sep  7 10:49:01 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		clog10a(floatComplex* in, floatComplex* out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = clog10s(in[i]);
  }
}
