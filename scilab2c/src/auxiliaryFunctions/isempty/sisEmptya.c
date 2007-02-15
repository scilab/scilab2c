/*
**  -*- C -*-
**
** sisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 14:59:33 2007 jofret
** Last update Thu Feb 15 16:53:35 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdbool.h>
#include "notFound.h"

extern int		sfinda(float*, int);

bool		sisEmptya(float* x, int size) {
  if (sfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
