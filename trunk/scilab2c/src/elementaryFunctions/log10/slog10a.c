/*
**  -*- C -*-
**
** slog10a.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Sep  6 16:22:18 2007 bruno
** Last update Mon Oct 22 09:52:23 2007 bruno
**
** Copyright INRIA 2007
*/

#include "log10.h"

void		slog10a(float* in, int size, float* out) {
  int i = 0;
  for (i = 0 ; i < size ; ++i) {
    out[i] = slog10s(in[i]);
  }
}
