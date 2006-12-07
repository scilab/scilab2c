/*
**  -*- C -*-
**
** scosa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Thu Dec  7 17:32:22 2006 jofret
**
** Copyright INRIA 2006
*/

float scoss(float);

void scosa(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = scoss(x[i]);
  }
}
