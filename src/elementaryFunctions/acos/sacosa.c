/*
**  -*- C -*-
**
** sacosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Fri Jan  5 10:26:07 2007 jofret
**
** Copyright INRIA 2007
*/


float sacoss(float);

void sacosa(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sacoss(x[i]);
  }
}
