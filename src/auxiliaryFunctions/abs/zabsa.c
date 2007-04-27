/*
**  -*- C -*-
**
** zabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 13:24:43 2007 jofret
** Last update Wed Apr 25 13:25:04 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	zabsa(doubleComplex *in, double* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = zabss(in[i]);
  }
}
