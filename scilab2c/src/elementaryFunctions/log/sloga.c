/*
**  -*- C -*-
**
** sloga.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Sep  7 10:29:01 2007 bruno
** Last update Mon Oct 22 09:51:33 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log.h"

void		sloga(float* in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = slogs(in[i]);
  }
}
