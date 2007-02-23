/*
**  -*- C -*-
**
** sisEmptya.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 14:59:33 2007 jofret
** Last update Fri Feb 23 18:00:31 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isEmpty.h"
#include "find.h"

bool		sisEmptya(float* x, int size) {
  if (sfinda(x, size) == NOT_FOUND) {
    return true;
  }
  return false;
}
