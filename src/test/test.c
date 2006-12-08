/*
**  -*- C -*-
**
** test.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:53:51 2006 jofret
** Last update Fri Dec  8 15:04:07 2006 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>
#include "test.h"

void newline() {
  printf("\n");
}

int main(int argc, char** argv) {
  int cosStatus, sinStatus;


  printf("-*- -> Begin test sequence <- -*-");
  newline();

  /* Test Cosine stuffs */
  cosStatus = testCos();
  /* Test Sine stuffs */
  sinStatus = testSin();

  printf("-*- -> End test sequence <- -*-");
  newline();

  return (cosStatus+sinStatus);
}
