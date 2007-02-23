/*
**  -*- C -*-
**
** testCos.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Feb 23 18:10:28 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#include "cos.h"

#define PI 3.1415826535

void scossTest() {
  printf(">> Float scalar\n");
  printf("scoss(0) = %f\n", scoss((float) 0));
  printf("scoss(PI) = %f\n", scoss(PI));
  printf("scoss(PI/2) = %f\n", scoss(PI/2));
  printf("scoss(PI/3) = %f\n", scoss(PI/3));
  printf("scoss(PI/4) = %f\n", scoss(PI/4));
  printf("scoss(PI/6) = %f\n", scoss(PI/6));
  printf("scoss(-PI) = %f\n", scoss(-PI));
  printf("scoss(-PI/2) = %f\n", scoss(-PI/2));
  printf("scoss(-PI/3) = %f\n", scoss(-PI/3));
  printf("scoss(-PI/4) = %f\n", scoss(-PI/4));
  printf("scoss(-PI/6) = %f\n", scoss(-PI/6));
}

void dcossTest() {
  printf(">> Double scalar\n");
  printf("dcoss(0) = %e\n", dcoss((double) 0));
  printf("dcoss(PI) = %e\n", dcoss(PI));
  printf("dcoss(PI/2) = %e\n", dcoss(PI/2));
  printf("dcoss(PI/3) = %e\n", dcoss(PI/3));
  printf("dcoss(PI/4) = %e\n", dcoss(PI/4));
  printf("dcoss(PI/6) = %e\n", dcoss(PI/6));
  printf("dcoss(-PI) = %e\n", dcoss(-PI));
  printf("dcoss(-PI/2) = %e\n", dcoss(-PI/2));
  printf("dcoss(-PI/3) = %e\n", dcoss(-PI/3));
  printf("dcoss(-PI/4) = %e\n", dcoss(-PI/4));
  printf("dcoss(-PI/6) = %e\n", dcoss(-PI/6));
}

void ccossTest() {
  printf(">> Float Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void zcossTest() {
  printf(">> Double Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void scosaTest() {
  printf(">> Float array\n");
  /* FIXME : Implement some test here ... */
}

void dcosaTest() {
  printf(">> Double Array\n");
  /* FIXME : Implement some test here ... */
}

void ccosaTest() {
  printf(">> Float Complex Array\n");
  /* FIXME : Implement some test here ... */
}

void zcosaTest() {
  printf(">> Double Complex Array\n");
  /* FIXME : Implement some test here ... */
}

int testCos() {
  printf("\n>>>> Cosine Tests\n");
  scossTest();
  dcossTest();
  ccossTest();
  zcossTest();
  scosaTest();
  dcosaTest();
  ccosaTest();
  zcosaTest();
  return 0;
}
