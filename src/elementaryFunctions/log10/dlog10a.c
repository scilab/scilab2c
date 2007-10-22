/*
**  -*- C -*-
**
** dlog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:23:09 2007 bruno
** Last update Mon Oct 22 09:52:35 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		dlog10a(double* in, int size, double* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = dlog10s(in[i]);
  }
}
