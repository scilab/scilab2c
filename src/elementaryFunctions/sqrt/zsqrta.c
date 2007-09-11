/*
**  -*- C -*-
**
** zsqrta.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 11:41:40 2007 bruno
** Last update Fri Sep  7 11:42:01 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sqrt.h"

void		zsqrta(doubleComplex* in, doubleComplex* out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = zsqrts(in[i]);
  }
}
