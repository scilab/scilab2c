/*
**  -*- C -*-
**
** dabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 11:17:25 2007 jofret
** Last update Wed Apr 25 11:26:54 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	dabsa(double *in, double* out, int size){
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = dabss(in[i]);
  }
}
