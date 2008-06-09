/*
**  -*- C -*-
**
** dsqrta.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 11:40:21 2007 bruno
** Last update Mon Oct 22 09:49:34 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sqrt.h"

void		dsqrta(double* in, int size, double* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = dsqrts(in[i]);
  }
}
