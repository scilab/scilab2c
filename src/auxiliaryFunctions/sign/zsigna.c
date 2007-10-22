/*
**  -*- C -*-
**
** zsigna.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 17:38:11 2007 bruno
** Last update Fri Sep  7 17:38:36 2007 bruno
**
** Copyright INRIA 2007
*/

#include "sign.h"

int zsigna(doubleComplex *in, int size) {
  int i = 0;
  int sign = 1;

  /* FIXME : Does it what it's supposed to do ? */
  for (i = 0 ; i < size ; ++i) {
    sign = sign * zsigns(in[i]);
  }
  return sign;
}
