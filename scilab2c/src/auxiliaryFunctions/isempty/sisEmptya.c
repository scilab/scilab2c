/*
**  -*- C -*-
**
** sisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 14:59:33 2007 jofret
** Last update Wed Feb 14 15:25:32 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdbool.h>
#include "notFound.h"

int		sfinda(float*, int);

bool		sisEmptya(float* x, int size) {
  if (sfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
