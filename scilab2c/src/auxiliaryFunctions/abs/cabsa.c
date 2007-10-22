/*
**  -*- C -*-
**
** cabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 13:23:20 2007 jofret
** Last update Mon Oct 22 10:46:16 2007 bruno
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	cabsa(floatComplex *in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = cabss(in[i]);
  }
}
