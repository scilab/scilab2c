/*
**  -*- C -*-
**
** testCos.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Dec  8 16:58:25 2006 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

float scoss(float);

void scossTest() {
  printf("scoss(0) = %f\n", scoss((float) 0));
}

int testCos() {
  printf(">> Cosine Tests\n");
  scossTest();
  return 0;
}
