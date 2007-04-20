/*
**  -*- C -*-
**
** cisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:33:30 2007 jofret
** Last update Fri Feb 23 18:01:22 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isEmpty.h"
#include "find.h"

bool		cisEmptya(floatComplex* x, int size) {
  if (cfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
