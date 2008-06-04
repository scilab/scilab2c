/*
**  -*- C -*-
**
** zisemptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:34:28 2007 jofret
** Last update Fri Apr 27 09:01:49 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isempty.h"

bool		zisemptya(doubleComplex* x, int size) {
  if (zfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
