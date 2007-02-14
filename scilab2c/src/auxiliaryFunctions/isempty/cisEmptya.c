/*
**  -*- C -*-
**
** cisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:33:30 2007 jofret
** Last update Wed Feb 14 15:35:29 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdbool.h>
#include "notFound.h"
#include "floatComplex.h"

int		cfinda(floatComplex*, int);

bool		cisEmptya(floatComplex* x, int size) {
  if (cfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
