/*
**  -*- C -*-
**
** disEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:29:27 2007 jofret
** Last update Wed Feb 14 15:29:54 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdbool.h>
#include "notFound.h"

int		dfinda(double*, int);

bool		disEmptya(double* x, int size) {
  if (dfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
