/*
**  -*- C -*-
**
** ssina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 10:52:14 2006 jofret
** Last update Fri Dec  8 11:01:32 2006 jofret
**
** Copyright INRIA 2006
*/

float ssins(float);

void ssina(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssins(x[i]);
  }
}
