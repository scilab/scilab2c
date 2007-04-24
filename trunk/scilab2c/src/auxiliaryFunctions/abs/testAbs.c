/*
**  -*- C -*-
**
** testAbs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Mon Apr 23 17:40:12 2007 jofret
**
** Copyright INRIA 2007
*/

#include "testAbs.h"

int sabssTest() {
  printf(">> Floats \n");
  float value1 = -123456.789;
  float value2 = 987654.321;
  assert(sabss(value1) == -value1);
  assert(sabss(value2) == value2);
  assert(sabss(0) == 0);
  assert(sabss(-1) == 1);
  assert(sabss(1) == 1);
  return 0;
}

int dabssTest() {
  printf(">> Doubles \n");
  double value1 = -123456.789;
  double value2 = 987654.321;
  assert(dabss(value1) == -value1);
  assert(dabss(value2) == value2);
  assert(dabss(0) == 0);
  assert(dabss(-1) == 1);
  assert(dabss(1) == 1);
  return 0;
}

int cabssTest() {
  printf(">> Float Complex \n");
  floatComplex value1 = FloatComplex(4,3);
  assert(cabss(value1) == 5);
  return 0;
}

int zabssTest() {
  printf(">> Double Complex \n");
 doubleComplex value1 = DoubleComplex(4,3);
 assert(zabss(value1) == 5);
  return 0;
}

int testAbs() {
  int sabssStatus, dabssStatus = 0;
  int cabssStatus, zabssStatus = 0;

  printf(">>>> Abs Tests\n");
  sabssStatus = sabssTest();
  dabssStatus = dabssTest();
  cabssStatus = cabssTest();
  zabssStatus = zabssTest();

  return (sabssStatus + dabssStatus +
	  cabssStatus + zabssStatus);
}

int main(void) {
  assert(testAbs() == 0);
  return 0;
}
