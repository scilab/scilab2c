/*
**  -*- C -*-
**
** stana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:03:27 2006 jofret
** Last update Mon Jan 29 16:11:44 2007 jofret
**
** Copyright INRIA 2006
*/

float stans(float);

void stana(float* x, int strideX, float* y, int strideY, int size) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = stans(x[i]);
  }
}
