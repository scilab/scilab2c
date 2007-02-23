/*
**  -*- C -*-
**
** test.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 14:53:51 2006 jofret
** Last update Fri Feb 23 18:10:36 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#include "test.h"

void newline() {
  printf("\n");
}

int main(int argc, char** argv) {
  int cosStatus, coshStatus = 0;
  int sinStatus, sinhStatus = 0;
  int tanStatus, tanhStatus = 0;
  int expStatus = 0;
  int findStatus, isEmptyStatus = 0;


  printf("-*- -> Begin test sequence <- -*-");
  newline();

  /* Test Cosine stuffs */
  cosStatus = testCos();
  /* Test Hyperbolic Cosine stuffs */
  coshStatus = testCosh();
  /* Test Sine stuffs */
  sinStatus = testSin();
  /* Test Hyperbolic Sine stuffs */
  sinStatus = testSinh();
  /* Test Tangeant stuffs */
  tanStatus = testTan();
  /* Test Hyperbolic Tangeant stuffs */
  tanhStatus = testTanh();
  /* Test Exponential stuffs */
  expStatus = testExp();


  /* Test Find stuffs */
  findStatus = testFind();
  /* Test IsEmpty stuffs */
  isEmptyStatus = testIsEmpty();


  printf("-*- -> End test sequence <- -*-");
  newline();

  return (cosStatus+coshStatus+
	  sinStatus+sinhStatus+
	  tanStatus+tanhStatus+
	  expStatus+
	  findStatus+isEmptyStatus);
}
