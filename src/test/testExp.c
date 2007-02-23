/*
**  -*- C -*-
**
** testExp.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Feb 23 18:09:59 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#include "exp.h"

#define PI 3.1415826535

void sexpsTest() {
  printf(">> Float scalar\n");
  printf("sexps(0) = %f\n", sexps((float) 0));
  printf("sexps(PI) = %f\n", sexps(PI));
  printf("sexps(PI/2) = %f\n", sexps(PI/2));
  printf("sexps(PI/3) = %f\n", sexps(PI/3));
  printf("sexps(PI/4) = %f\n", sexps(PI/4));
  printf("sexps(PI/6) = %f\n", sexps(PI/6));
  printf("sexps(-PI) = %f\n", sexps(-PI));
  printf("sexps(-PI/2) = %f\n", sexps(-PI/2));
  printf("sexps(-PI/3) = %f\n", sexps(-PI/3));
  printf("sexps(-PI/4) = %f\n", sexps(-PI/4));
  printf("sexps(-PI/6) = %f\n", sexps(-PI/6));
}

void dexpsTest() {
  printf(">> Double scalar\n");
  printf("dexps(0) = %e\n", dexps((double) 0));
  printf("dexps(PI) = %e\n", dexps(PI));
  printf("dexps(PI/2) = %e\n", dexps(PI/2));
  printf("dexps(PI/3) = %e\n", dexps(PI/3));
  printf("dexps(PI/4) = %e\n", dexps(PI/4));
  printf("dexps(PI/6) = %e\n", dexps(PI/6));
  printf("dexps(-PI) = %e\n", dexps(-PI));
  printf("dexps(-PI/2) = %e\n", dexps(-PI/2));
  printf("dexps(-PI/3) = %e\n", dexps(-PI/3));
  printf("dexps(-PI/4) = %e\n", dexps(-PI/4));
  printf("dexps(-PI/6) = %e\n", dexps(-PI/6));
}

int testExp() {
  printf("\n>>>> Exponential Tests\n");
  sexpsTest();
  dexpsTest();
  /* FIXME : Implement some test here ... */
  /*
    cexpsTest();
    zexpsTest();
    sexpaTest();
    dexpaTest();
    cexpaTest();
    zexpaTest();
  */
  return 0;
}
