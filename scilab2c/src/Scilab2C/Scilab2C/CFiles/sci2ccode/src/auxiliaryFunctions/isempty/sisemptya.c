/*
**  -*- C -*-
**
** sisemptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 14:59:33 2007 jofret
** Last update Fri Apr 27 08:59:07 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isempty.h"

bool		sisemptya(float* x, int size) {
  if (sfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
