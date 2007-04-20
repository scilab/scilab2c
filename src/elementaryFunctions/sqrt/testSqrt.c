/*
**  -*- C -*-
**
** testSqrt.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Fri Apr 20 10:53:23 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testSqrt.h"

void ssqrtsTest() {
  printf(">> Float scalar\n");
  printf("ssqrts(0) = %f\n", ssqrts((float) 0));
  printf("ssqrts(PI) = %f\n", ssqrts(PI));
  printf("ssqrts(PI/2) = %f\n", ssqrts(PI/2));
  printf("ssqrts(PI/3) = %f\n", ssqrts(PI/3));
  printf("ssqrts(PI/4) = %f\n", ssqrts(PI/4));
  printf("ssqrts(PI/6) = %f\n", ssqrts(PI/6));
  printf("ssqrts(-PI) = %f\n", ssqrts(-PI));
  printf("ssqrts(-PI/2) = %f\n", ssqrts(-PI/2));
  printf("ssqrts(-PI/3) = %f\n", ssqrts(-PI/3));
  printf("ssqrts(-PI/4) = %f\n", ssqrts(-PI/4));
  printf("ssqrts(-PI/6) = %f\n", ssqrts(-PI/6));
}

void dsqrtsTest() {
  printf(">> Double scalar\n");
  printf("dsqrts(0) = %e\n", dsqrts((double) 0));
  printf("dsqrts(PI) = %e\n", dsqrts(PI));
  printf("dsqrts(PI/2) = %e\n", dsqrts(PI/2));
  printf("dsqrts(PI/3) = %e\n", dsqrts(PI/3));
  printf("dsqrts(PI/4) = %e\n", dsqrts(PI/4));
  printf("dsqrts(PI/6) = %e\n", dsqrts(PI/6));
  printf("dsqrts(-PI) = %e\n", dsqrts(-PI));
  printf("dsqrts(-PI/2) = %e\n", dsqrts(-PI/2));
  printf("dsqrts(-PI/3) = %e\n", dsqrts(-PI/3));
  printf("dsqrts(-PI/4) = %e\n", dsqrts(-PI/4));
  printf("dsqrts(-PI/6) = %e\n", dsqrts(-PI/6));
}

int testSqrt() {
  printf("\n>>>> Square Root Tests\n");
  ssqrtsTest();
  dsqrtsTest();
  /* FIXME : Implement some test here ... */
  /*
    csqrtsTest();
    zsqrtsTest();
    ssqrtaTest();
    dsqrtaTest();
    csqrtaTest();
    zsqrtaTest();
  */
  return 0;
}

int main() {
  assert(testSqrt() == 0);
  return 0;
}
