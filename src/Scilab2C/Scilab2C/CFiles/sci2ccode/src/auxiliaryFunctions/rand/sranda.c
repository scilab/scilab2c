/*
**  -*- C -*-
**
** sranda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 15:52:34 2007 bruno
** Last update Fri Sep  7 15:55:32 2007 bruno
**
** Copyright INRIA 2007
*/

#include "rand.h"

void sranda(float *out, int size) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = srands();
  }
}
