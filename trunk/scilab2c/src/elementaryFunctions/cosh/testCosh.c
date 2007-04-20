/*
**  -*- C -*-
**
** testCosh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Mar 30 11:42:57 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testCosh.h"

void scoshsTest(void) {
  printf(">> Float scalar\n");
  printf("scoshs(0) = %f\n", scoshs((float) 0));
  printf("scoshs(PI) = %f\n", scoshs(PI));
  printf("scoshs(PI/2) = %f\n", scoshs(PI/2));
  printf("scoshs(PI/3) = %f\n", scoshs(PI/3));
  printf("scoshs(PI/4) = %f\n", scoshs(PI/4));
  printf("scoshs(PI/6) = %f\n", scoshs(PI/6));
  printf("scoshs(-PI) = %f\n", scoshs(-PI));
  printf("scoshs(-PI/2) = %f\n", scoshs(-PI/2));
  printf("scoshs(-PI/3) = %f\n", scoshs(-PI/3));
  printf("scoshs(-PI/4) = %f\n", scoshs(-PI/4));
  printf("scoshs(-PI/6) = %f\n", scoshs(-PI/6));
}

void dcoshsTest(void) {
  printf(">> Double scalar\n");
  printf("dcoshs(0) = %e\n", dcoshs((double) 0));
  printf("dcoshs(PI) = %e\n", dcoshs(PI));
  printf("dcoshs(PI/2) = %e\n", dcoshs(PI/2));
  printf("dcoshs(PI/3) = %e\n", dcoshs(PI/3));
  printf("dcoshs(PI/4) = %e\n", dcoshs(PI/4));
  printf("dcoshs(PI/6) = %e\n", dcoshs(PI/6));
  printf("dcoshs(-PI) = %e\n", dcoshs(-PI));
  printf("dcoshs(-PI/2) = %e\n", dcoshs(-PI/2));
  printf("dcoshs(-PI/3) = %e\n", dcoshs(-PI/3));
  printf("dcoshs(-PI/4) = %e\n", dcoshs(-PI/4));
  printf("dcoshs(-PI/6) = %e\n", dcoshs(-PI/6));
}

int testCosh(void) {
  printf("\n>>>> Hyperbolic Cosine Tests\n");
  scoshsTest();
  dcoshsTest();
  /* FIXME : Implement some test here ... */
  /*
    ccoshsTest();
    zcoshsTest();
    scoshaTest();
    dcoshaTest();
    ccoshaTest();
    zcoshaTest();
  */
  return 0;
}

int main(void) {
  assert(testCosh() == 0);
  return 0;
}
