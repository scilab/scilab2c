/*
**  -*- C -*-
**
** sasina.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Wed Jan 31 11:15:18 2007 jofret
**
** Copyright INRIA 2007
*/

float sasins(float);

void sasina(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sasins(x[i]);
  }
}
