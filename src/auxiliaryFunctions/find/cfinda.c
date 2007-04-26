/*
**  -*- C -*-
**
** cfinda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Feb 13 16:46:42 2007 jofret
** Last update Tue Apr 24 18:12:49 2007 jofret
**
** Copyright INRIA 2007
*/

#include "find.h"

int		cfinda(floatComplex* z, int size) {
  int i = 0;
  for (i = 0; i < size ; ++i) {
    if (creals(z[i]) != 0 || cimags(z[i])) {
      return i;
    }
  }
  return NOT_FOUND;
}
