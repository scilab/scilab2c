/*
**  -*- C -*-
**
** cisemptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:33:30 2007 jofret
** Last update Fri Apr 27 08:58:40 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isempty.h"

bool		cisemptya(floatComplex* x, int size) {
  if (cfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
