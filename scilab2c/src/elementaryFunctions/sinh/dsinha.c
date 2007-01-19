/*
**  -*- C -*-
**
** dsinha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Fri Jan 19 15:20:32 2007 jofret
**
** Copyright INRIA 2006
*/

double dsinhs(double);

void dsinha(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsinhs(x[i]);
  }
}
