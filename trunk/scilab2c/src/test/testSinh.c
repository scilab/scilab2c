/*
**  -*- C -*-
**
** testSinh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Wed Feb 14 17:26:26 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#define PI 3.1415826535

float ssinhs(float);
double dsinhs(double);

void ssinhsTest() {
  printf(">> Float scalar\n");
  printf("ssinhs(0) = %f\n", ssinhs((float) 0));
  printf("ssinhs(PI) = %f\n", ssinhs(PI));
  printf("ssinhs(PI/2) = %f\n", ssinhs(PI/2));
  printf("ssinhs(PI/3) = %f\n", ssinhs(PI/3));
  printf("ssinhs(PI/4) = %f\n", ssinhs(PI/4));
  printf("ssinhs(PI/6) = %f\n", ssinhs(PI/6));
  printf("ssinhs(-PI) = %f\n", ssinhs(-PI));
  printf("ssinhs(-PI/2) = %f\n", ssinhs(-PI/2));
  printf("ssinhs(-PI/3) = %f\n", ssinhs(-PI/3));
  printf("ssinhs(-PI/4) = %f\n", ssinhs(-PI/4));
  printf("ssinhs(-PI/6) = %f\n", ssinhs(-PI/6));
}

void dsinhsTest() {
  printf(">> Double scalar\n");
  printf("dsinhs(0) = %e\n", dsinhs((double) 0));
  printf("dsinhs(PI) = %e\n", dsinhs(PI));
  printf("dsinhs(PI/2) = %e\n", dsinhs(PI/2));
  printf("dsinhs(PI/3) = %e\n", dsinhs(PI/3));
  printf("dsinhs(PI/4) = %e\n", dsinhs(PI/4));
  printf("dsinhs(PI/6) = %e\n", dsinhs(PI/6));
  printf("dsinhs(-PI) = %e\n", dsinhs(-PI));
  printf("dsinhs(-PI/2) = %e\n", dsinhs(-PI/2));
  printf("dsinhs(-PI/3) = %e\n", dsinhs(-PI/3));
  printf("dsinhs(-PI/4) = %e\n", dsinhs(-PI/4));
  printf("dsinhs(-PI/6) = %e\n", dsinhs(-PI/6));
}

int testSinh() {
  printf("\n>>>> Hyperbolic Sine Tests\n");
  ssinhsTest();
  dsinhsTest();
  /* FIXME : Implement some test here ... */
  /*
    csinhsTest();
    zsinhsTest();
    ssinhaTest();
    dsinhaTest();
    csinhaTest();
    zsinhaTest();
  */
  return 0;
}
