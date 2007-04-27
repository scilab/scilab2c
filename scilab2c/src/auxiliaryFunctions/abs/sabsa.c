/*
**  -*- C -*-
**
** sabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 10:53:09 2007 jofret
** Last update Wed Apr 25 11:26:19 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	sabsa(float *in, float* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = sabss(in[i]);
  }
}
