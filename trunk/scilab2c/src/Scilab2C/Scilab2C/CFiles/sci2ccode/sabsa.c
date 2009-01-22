/*
**  -*- C -*-
**
** sabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 10:53:09 2007 jofret
** Last update Mon Oct 22 10:45:22 2007 bruno
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	sabsa(float *in, int size, float* out) {
  int i = 0;
  
  for (i = 0; i < size; ++i) {
    out[i] = sabss(in[i]);
  }
}
