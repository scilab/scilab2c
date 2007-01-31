/*
**  -*- C -*-
**
** dexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Wed Jan 31 09:20:51 2007 jofret
**
** Copyright INRIA 2006
*/

double dexps(double);

void dexpa(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dexps(x[i]);
  }
}
