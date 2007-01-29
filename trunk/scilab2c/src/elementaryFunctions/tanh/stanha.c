/*
**  -*- C -*-
**
** stanha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Mon Jan 29 17:04:59 2007 jofret
**
** Copyright INRIA 2006
*/

float stanhs(float);

void stanha(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = stanhs(x[i]);
  }
}
