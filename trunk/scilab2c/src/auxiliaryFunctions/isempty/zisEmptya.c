/*
**  -*- C -*-
**
** zisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:34:28 2007 jofret
** Last update Wed Feb 14 15:40:02 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdbool.h>
#include "notFound.h"
#include "doubleComplex.h"

int		zfinda(doubleComplex*, int);

bool		zisEmptya(doubleComplex* x, int size) {
  if (zfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
