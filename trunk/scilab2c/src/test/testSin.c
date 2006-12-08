/*
**  -*- C -*-
**
** testSin.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Fri Dec  8 16:56:19 2006 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

float ssins(float);

void ssinsTest() {
  printf("ssins(0) = %f\n", ssins((float) 0));
}

int testSin() {
  printf(">> Sine Tests\n");
  ssinsTest();
  return 0;
}
