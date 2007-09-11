/*
**  -*- C -*-
**
** testAtan.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Thu Sep  6 11:53:30 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testAtan.h"

void satansTest() {
  printf(">> Float scalar\n");
  printf("satans(0) = %f\n", satans((float) 0));
  printf("satans(PI) = %f\n", satans(PI));
  printf("satans(PI/2) = %f\n", satans(PI/2));
  printf("satans(PI/3) = %f\n", satans(PI/3));
  printf("satans(PI/4) = %f\n", satans(PI/4));
  printf("satans(PI/6) = %f\n", satans(PI/6));
  printf("satans(-PI) = %f\n", satans(-PI));
  printf("satans(-PI/2) = %f\n", satans(-PI/2));
  printf("satans(-PI/3) = %f\n", satans(-PI/3));
  printf("satans(-PI/4) = %f\n", satans(-PI/4));
  printf("satans(-PI/6) = %f\n", satans(-PI/6));
}

void datansTest() {
  printf(">> Double scalar\n");
  printf("datans(0) = %e\n", datans((double) 0));
  printf("datans(PI) = %e\n", datans(PI));
  printf("datans(PI/2) = %e\n", datans(PI/2));
  printf("datans(PI/3) = %e\n", datans(PI/3));
  printf("datans(PI/4) = %e\n", datans(PI/4));
  printf("datans(PI/6) = %e\n", datans(PI/6));
  printf("datans(-PI) = %e\n", datans(-PI));
  printf("datans(-PI/2) = %e\n", datans(-PI/2));
  printf("datans(-PI/3) = %e\n", datans(-PI/3));
  printf("datans(-PI/4) = %e\n", datans(-PI/4));
  printf("datans(-PI/6) = %e\n", datans(-PI/6));
}

int testAtan() {
  printf("\n>>>> Atangeant Tests\n");
  satansTest();
  datansTest();
  /* FIXME : Implement some test here ... */
  /*
    catansTest();
    zatansTest();
    satanaTest();
    datanaTest();
    catanaTest();
    zatanaTest();
  */
  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}
