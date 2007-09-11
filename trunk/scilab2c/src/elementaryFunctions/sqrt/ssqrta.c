/*
**  -*- C -*-
**
** ssqrta.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 11:06:03 2007 bruno
** Last update Fri Sep  7 11:39:54 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sqrt.h"

void		ssqrta(float* in, float* out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = ssqrts(in[i]);
  }
}
