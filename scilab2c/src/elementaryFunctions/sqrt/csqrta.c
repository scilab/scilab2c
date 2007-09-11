/*
**  -*- C -*-
**
** csqrta.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 11:40:55 2007 bruno
** Last update Fri Sep  7 11:41:27 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sqrt.h"

void		csqrta(floatComplex* in, floatComplex* out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = csqrts(in[i]);
  }
}
