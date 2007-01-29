/*
**  -*- C -*-
**
** testTan.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Mon Jan 29 17:13:12 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#define PI 3.1415826535

float stans(float);
double dtans(double);


void stansTest() {
  printf(">> Float scalar\n");
  printf("stans(0) = %f\n", stans((float) 0));
  printf("stans(PI) = %f\n", stans(PI));
  printf("stans(PI/2) = %f\n", stans(PI/2));
  printf("stans(PI/3) = %f\n", stans(PI/3));
  printf("stans(PI/4) = %f\n", stans(PI/4));
  printf("stans(PI/6) = %f\n", stans(PI/6));
  printf("stans(-PI) = %f\n", stans(-PI));
  printf("stans(-PI/2) = %f\n", stans(-PI/2));
  printf("stans(-PI/3) = %f\n", stans(-PI/3));
  printf("stans(-PI/4) = %f\n", stans(-PI/4));
  printf("stans(-PI/6) = %f\n", stans(-PI/6));
}

void dtansTest() {
  printf(">> Double scalar\n");
  printf("dtans(0) = %e\n", dtans((double) 0));
  printf("dtans(PI) = %e\n", dtans(PI));
  printf("dtans(PI/2) = %e\n", dtans(PI/2));
  printf("dtans(PI/3) = %e\n", dtans(PI/3));
  printf("dtans(PI/4) = %e\n", dtans(PI/4));
  printf("dtans(PI/6) = %e\n", dtans(PI/6));
  printf("dtans(-PI) = %e\n", dtans(-PI));
  printf("dtans(-PI/2) = %e\n", dtans(-PI/2));
  printf("dtans(-PI/3) = %e\n", dtans(-PI/3));
  printf("dtans(-PI/4) = %e\n", dtans(-PI/4));
  printf("dtans(-PI/6) = %e\n", dtans(-PI/6));
}

int testTan() {
  printf(">>>> Tangeant Tests\n");
  stansTest();
  dtansTest();
  return 0;
}
