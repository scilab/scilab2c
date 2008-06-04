/*
**  -*- C -*-
**
** sfinda.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Feb 13 16:53:03 2007 jofret
** Last update Tue Apr 24 16:40:06 2007 jofret
**
** Copyright INRIA 2007
*/

#include "find.h"

int      sfinda(float* x, int size) {
  int i = 0;
  for (i = 0; i < size ; ++i) {
    if (x[i] != 0) {
      return i;
    }
  }
  return NOT_FOUND;
}

