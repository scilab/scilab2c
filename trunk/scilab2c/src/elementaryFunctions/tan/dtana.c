/*
**  -*- C -*-
**
** dtana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 14:54:56 2006 jofret
** Last update Mon Jan 29 16:12:12 2007 jofret
**
** Copyright INRIA 2006
*/

double dtans(double);

void dtana(double* x, int strideX, double* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dtans(x[i]);
  }
}
