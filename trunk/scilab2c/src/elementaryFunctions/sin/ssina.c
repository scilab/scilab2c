/*
**  -*- C -*-
**
** ssina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 10:52:14 2006 jofret
** Last update Mon Oct 22 09:50:09 2007 bruno
**
** Copyright INRIA 2006
*/

#include "sin.h"

void ssina(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssins(x[i]);
  }
}
