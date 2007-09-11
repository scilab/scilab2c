/*
**  -*- C -*-
**
** testExp10.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Thu Sep  6 16:56:42 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testExp10.h"

#define PI 3.1415826535

void sexp10sTest(void) {
  printf(">> Float scalar\n");
  printf("sexp10s(0) = %f\n", sexp10s((float) 0));
  printf("sexp10s(PI) = %f\n", sexp10s(PI));
  printf("sexp10s(PI/2) = %f\n", sexp10s(PI/2));
  printf("sexp10s(PI/3) = %f\n", sexp10s(PI/3));
  printf("sexp10s(PI/4) = %f\n", sexp10s(PI/4));
  printf("sexp10s(PI/6) = %f\n", sexp10s(PI/6));
  printf("sexp10s(-PI) = %f\n", sexp10s(-PI));
  printf("sexp10s(-PI/2) = %f\n", sexp10s(-PI/2));
  printf("sexp10s(-PI/3) = %f\n", sexp10s(-PI/3));
  printf("sexp10s(-PI/4) = %f\n", sexp10s(-PI/4));
  printf("sexp10s(-PI/6) = %f\n", sexp10s(-PI/6));
}

void dexp10sTest(void) {
  printf(">> Double scalar\n");
  printf("dexp10s(0) = %e\n", dexp10s((double) 0));
  printf("dexp10s(PI) = %e\n", dexp10s(PI));
  printf("dexp10s(PI/2) = %e\n", dexp10s(PI/2));
  printf("dexp10s(PI/3) = %e\n", dexp10s(PI/3));
  printf("dexp10s(PI/4) = %e\n", dexp10s(PI/4));
  printf("dexp10s(PI/6) = %e\n", dexp10s(PI/6));
  printf("dexp10s(-PI) = %e\n", dexp10s(-PI));
  printf("dexp10s(-PI/2) = %e\n", dexp10s(-PI/2));
  printf("dexp10s(-PI/3) = %e\n", dexp10s(-PI/3));
  printf("dexp10s(-PI/4) = %e\n", dexp10s(-PI/4));
  printf("dexp10s(-PI/6) = %e\n", dexp10s(-PI/6));
}

int testExp10(void) {
  printf("\n>>>> Exp10onential Tests\n");
  sexp10sTest();
  dexp10sTest();
  /* FIXME : Implement some test here ... */
  /*
    cexp10sTest();
    zexp10sTest();
    sexp10aTest();
    dexp10aTest();
    cexp10aTest();
    zexp10aTest();
  */
  return 0;
}

int main(void) {
  assert(testExp10() == 0);
  return 0;
}
