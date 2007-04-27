/*
**  -*- C -*-
**
** testAbs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Wed Apr 25 13:37:54 2007 jofret
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

int sabsaTest() {
  printf(">> Floats Array\n");
  float value1 = -123456.789;
  float value2 = 987654.321;
  float value3 = 0;
  float in[3] = {value1, value2, value3};
  float out[3];
  sabsa(in, out, 3);
  assert(out[0] == -value1);
  assert(out[1] == value2);
  assert(out[2] == value3);
  assert(out[2] == 0);
  return 0;
}

int dabsaTest() {
  printf(">> Doubles Array\n");
  double value1 = -123456.789;
  double value2 = 987654.321;
  double value3 = 0;
  double in[3] = {value1, value2, value3};
  double out[3];
  dabsa(in, out, 3);
  assert(out[0] == -value1);
  assert(out[1] == value2);
  assert(out[2] == value3);
  assert(out[2] == 0);
  return 0;
}

int cabsaTest() {
  printf(">> Float Complex Array\n");
  floatComplex value1 = FloatComplex(4,3);
  floatComplex value2 = FloatComplex(-4,3);
  floatComplex value3 = FloatComplex(4,-3);
  floatComplex value4 = FloatComplex(-4,-3);
  floatComplex in[4] = {value1, value2, value3, value4};
  float out[4];
  cabsa(in, out, 4);
  assert(out[0] == 5);
  assert(out[1] == 5);
  assert(out[2] == 5);
  assert(out[3] == 5);
  return 0;
}

int zabsaTest() {
  printf(">> Double Complex Array\n");
  doubleComplex value1 = DoubleComplex(4,3);
  doubleComplex value2 = DoubleComplex(-4,3);
  doubleComplex value3 = DoubleComplex(4,-3);
  doubleComplex value4 = DoubleComplex(-4,-3);
  doubleComplex in[4] = {value1, value2, value3, value4};
  double out[4];
  zabsa(in, out, 4);
  assert(out[0] == 5);
  assert(out[1] == 5);
  assert(out[2] == 5);
  assert(out[3] == 5);
  return 0;
}

int testAbs() {
  int sabssStatus, dabssStatus = 0;
  int cabssStatus, zabssStatus = 0;
  int sabsaStatus, dabsaStatus = 0;
  int cabsaStatus, zabsaStatus = 0;

  printf(">>>> Abs Tests\n");
  sabssStatus = sabssTest();
  dabssStatus = dabssTest();
  cabssStatus = cabssTest();
  zabssStatus = zabssTest();
  sabsaStatus = sabsaTest();
  dabsaStatus = dabsaTest();
  cabsaStatus = cabsaTest();
  zabsaStatus = zabsaTest();

  return (sabssStatus + dabssStatus +
	  cabssStatus + zabssStatus+
	  sabsaStatus + dabsaStatus +
	  cabsaStatus + zabsaStatus);
}

int main(void) {
  assert(testAbs() == 0);
  return 0;
}
