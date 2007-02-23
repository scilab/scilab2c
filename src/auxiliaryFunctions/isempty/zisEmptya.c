/*
**  -*- C -*-
**
** zisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:34:28 2007 jofret
** Last update Fri Feb 23 17:59:54 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isEmpty.h"
#include "find.h"

bool		zisEmptya(doubleComplex* x, int size) {
  if (zfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
