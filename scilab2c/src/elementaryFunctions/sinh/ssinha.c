/*
**  -*- C -*-
**
** ssinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 10:52:14 2006 jofret
** Last update Mon Mar 19 11:32:34 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"

void ssinha(float* x, float* y, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssinhs(x[i]);
  }
}
