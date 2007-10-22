/*
**  -*- C -*-
**
** cranda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 16:05:02 2007 bruno
** Last update Fri Sep  7 16:08:23 2007 bruno
**
** Copyright INRIA 2007
*/

#include "rand.h"

void cranda(floatComplex *out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = crands();
  }
}
