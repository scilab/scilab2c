/*
**  -*- C -*-
**
** zlog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:21:57 2007 bruno
** Last update Fri Sep  7 10:50:59 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		zlog10a(doubleComplex* in, doubleComplex* out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = zlog10s(in[i]);
  }
}
