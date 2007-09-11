/*
**  -*- C -*-
**
** sloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:29:01 2007 bruno
** Last update Fri Sep  7 10:30:59 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void		sloga(float* in, float* out, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = slogs(in[i]);
  }
}
