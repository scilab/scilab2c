/*
**  -*- C -*-
**
** cabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 13:23:20 2007 jofret
** Last update Wed Apr 25 13:24:32 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	cabsa(floatComplex *in, float* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = cabss(in[i]);
  }
}
