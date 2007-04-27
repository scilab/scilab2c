/*
**  -*- C -*-
**
** disemptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:29:27 2007 jofret
** Last update Fri Apr 27 08:58:55 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isempty.h"

bool		disemptya(double* x, int size) {
  if (dfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
