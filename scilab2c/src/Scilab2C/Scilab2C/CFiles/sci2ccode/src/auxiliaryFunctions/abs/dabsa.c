/*
**  -*- C -*-
**
** dabsa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Apr 25 11:17:25 2007 jofret
** Last update Mon Oct 22 10:45:56 2007 bruno
**
** Copyright INRIA 2007
*/

#include "abs.h"

void	dabsa(double *in, int size, double* out){
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = dabss(in[i]);
  }
}
