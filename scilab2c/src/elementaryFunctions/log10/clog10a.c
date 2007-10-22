/*
**  -*- C -*-
**
** clog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:23:40 2007 bruno
** Last update Mon Oct 22 09:52:46 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		clog10a(floatComplex* in, int size, floatComplex* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = clog10s(in[i]);
  }
}
