/*
**  -*- C -*-
**
** ssinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 10:52:14 2006 jofret
** Last update Mon Oct 22 09:50:30 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void ssinha(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssinhs(x[i]);
  }
}
