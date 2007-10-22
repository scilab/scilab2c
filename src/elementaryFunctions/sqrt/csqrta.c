/*
**  -*- C -*-
**
** csqrta.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 11:40:55 2007 bruno
** Last update Mon Oct 22 09:49:44 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sqrt.h"

void		csqrta(floatComplex* in, int size, floatComplex* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = csqrts(in[i]);
  }
}
