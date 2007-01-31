/*
**  -*- C -*-
**
** sexpa.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Wed Jan 31 09:20:32 2007 jofret
**
** Copyright INRIA 2006
*/

float sexps(float);

void sexpa(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sexps(x[i]);
  }
}
