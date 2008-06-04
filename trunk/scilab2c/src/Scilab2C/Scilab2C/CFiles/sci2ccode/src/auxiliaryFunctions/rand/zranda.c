/*
**  -*- C -*-
**
** zranda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 16:08:40 2007 bruno
** Last update Fri Sep  7 16:11:39 2007 bruno
**
** Copyright INRIA 2007
*/

#include "rand.h"

void zranda(doubleComplex *out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = zrands();
  }
}
