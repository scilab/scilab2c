/*
**  -*- C -*-
**
** zfinda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Feb 13 16:51:44 2007 jofret
** Last update Mon Oct 22 15:45:46 2007 bruno
**
** Copyright INRIA 2007
*/

#include "find.h"

int		zfinda(doubleComplex* z, int size) {
 int i = 0;
  for (i = 0; i < size ; ++i) {
    if (zreals(z[i]) != 0 || zimags(z[i]) != 0) {
      return i;
    }
  }
  return NOT_FOUND;
}
