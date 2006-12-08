/*
**  -*- C -*-
**
** dsina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 11:02:19 2006 jofret
** Last update Fri Dec  8 11:04:08 2006 jofret
**
** Copyright INRIA 2006
*/

double dsins(double);

void dsina(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsins(x[i]);
  }
}
