/*
**  -*- C -*-
**
** dasina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 11:29:20 2007 jofret
** Last update Fri Jan  5 16:23:58 2007 jofret
**
** Copyright INRIA 2007
*/


double dasins(double);

void dasina(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dasins(x[i]);
  }
}
