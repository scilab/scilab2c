/*
**  -*- C -*-
**
** zabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 13:24:43 2007 jofret
** Last update Mon Oct 22 10:47:00 2007 bruno
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	zabsa(doubleComplex *in, int size, double* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = zabss(in[i]);
  }
}
