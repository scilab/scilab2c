/*
**  -*- C -*-
**
** testTanh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Wed Feb 14 17:17:37 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#define PI 3.1415826535

float stanhs(float);
double dtanhs(double);


void stanhsTest() {
  printf(">> Float scalar\n");
  printf("stanhs(0) = %f\n", stanhs((float) 0));
  printf("stanhs(PI) = %f\n", stanhs(PI));
  printf("stanhs(PI/2) = %f\n", stanhs(PI/2));
  printf("stanhs(PI/3) = %f\n", stanhs(PI/3));
  printf("stanhs(PI/4) = %f\n", stanhs(PI/4));
  printf("stanhs(PI/6) = %f\n", stanhs(PI/6));
  printf("stanhs(-PI) = %f\n", stanhs(-PI));
  printf("stanhs(-PI/2) = %f\n", stanhs(-PI/2));
  printf("stanhs(-PI/3) = %f\n", stanhs(-PI/3));
  printf("stanhs(-PI/4) = %f\n", stanhs(-PI/4));
  printf("stanhs(-PI/6) = %f\n", stanhs(-PI/6));
}

void dtanhsTest() {
  printf(">> Double scalar\n");
  printf("dtanhs(0) = %e\n", dtanhs((double) 0));
  printf("dtanhs(PI) = %e\n", dtanhs(PI));
  printf("dtanhs(PI/2) = %e\n", dtanhs(PI/2));
  printf("dtanhs(PI/3) = %e\n", dtanhs(PI/3));
  printf("dtanhs(PI/4) = %e\n", dtanhs(PI/4));
  printf("dtanhs(PI/6) = %e\n", dtanhs(PI/6));
  printf("dtanhs(-PI) = %e\n", dtanhs(-PI));
  printf("dtanhs(-PI/2) = %e\n", dtanhs(-PI/2));
  printf("dtanhs(-PI/3) = %e\n", dtanhs(-PI/3));
  printf("dtanhs(-PI/4) = %e\n", dtanhs(-PI/4));
  printf("dtanhs(-PI/6) = %e\n", dtanhs(-PI/6));
}

void ctanhsTest() {
  printf(">> Float Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void ztanhsTest() {
  printf(">> Double Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void stanhaTest() {
  printf(">> Float array\n");
  /* FIXME : Implement some test here ... */
}

void dtanhaTest() {
  printf(">> Double array\n");
  /* FIXME : Implement some test here ... */
}

void ctanhaTest() {
  printf(">> Float Complex array\n");
  /* FIXME : Implement some test here ... */
}

void ztanhaTest() {
  printf(">> Double Complex array\n");
  /* FIXME : Implement some test here ... */
}

int testTanh() {
  printf("\n>>>> Hyperbolic Tangeant Tests\n");
  stanhsTest();
  dtanhsTest();
  ctanhsTest();
  ztanhsTest();
  stanhaTest();
  dtanhaTest();
  ctanhaTest();
  ztanhaTest();
  return 0;
}
