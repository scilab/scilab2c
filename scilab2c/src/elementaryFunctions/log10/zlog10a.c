/*
**  -*- C -*-
**
** zlog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:21:57 2007 bruno
** Last update Mon Oct 22 09:52:13 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		zlog10a(doubleComplex* in, int size, doubleComplex* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = zlog10s(in[i]);
  }
}
