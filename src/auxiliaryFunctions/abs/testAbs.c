/*
**  -*- C -*-
**
** testAbs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Mon Oct 22 15:27:49 2007 bruno
**
** Copyright INRIA 2007
*/

#include "testAbs.h"

int sabssTest() {
  float value1 = -123456.789;
  float value2 = 987654.321;
  printf(">> Floats \n");
  assert(sabss(value1) == -value1);
  assert(sabss(value2) == value2);
  assert(sabss(0) == 0);
  assert(sabss(-1) == 1);
  assert(sabss(1) == 1);
  return 0;
}

int dabssTest() {
  double value1 = -123456.789;
  double value2 = 987654.321;
  printf(">> Doubles \n");
  assert(dabss(value1) == -value1);
  assert(dabss(value2) == value2);
  assert(dabss(0) == 0);
  assert(dabss(-1) == 1);
  assert(dabss(1) == 1);
  return 0;
}

int cabssTest() {
  floatComplex value1 = FloatComplex(4,3);
  printf(">> Float Complex \n");
  assert(cabss(value1) == 5);
  return 0;
}

int zabssTest() {
  doubleComplex value1 = DoubleComplex(4,3);
  printf(">> Double Complex \n");
  assert(zabss(value1) == 5);
  return 0;
}

int sabsaTest() {
  float value1 = -123456.789;
  float value2 = 987654.321;
  float value3 = 0;
  float in[3];
  float out[3];

  in[0] = value1;
  in[1] = value2;
  in[2] = value3;

  printf(">> Floats Array\n");
  sabsa(in, 3, out);
  assert(out[0] == -value1);
  assert(out[1] == value2);
  assert(out[2] == value3);
  assert(out[2] == 0);
  return 0;
}

int dabsaTest() {
  double value1 = -123456.789;
  double value2 = 987654.321;
  double value3 = 0;
  double in[3];
  double out[3];

  in[0] = value1;
  in[1] = value2;
  in[2] = value3;

  printf(">> Doubles Array\n");
  dabsa(in, 3, out);
  assert(out[0] == -value1);
  assert(out[1] == value2);
  assert(out[2] == value3);
  assert(out[2] == 0);
  return 0;
}

int cabsaTest() {
  floatComplex in[4];
  float out[4];

  in[0] = FloatComplex(4,3);
  in[1] = FloatComplex(-4,3);
  in[2] = FloatComplex(4,-3);
  in[3] = FloatComplex(-4,-3);

  printf(">> Float Complex Array\n");
  cabsa(in, 4, out);
  assert(out[0] == 5);
  assert(out[1] == 5);
  assert(out[2] == 5);
  assert(out[3] == 5);
  return 0;
}

int zabsaTest() {
  doubleComplex in[4];
  double out[4];

  in[0] = DoubleComplex(4,3);
  in[1] = DoubleComplex(-4,3);
  in[2] = DoubleComplex(4,-3);
  in[3] = DoubleComplex(-4,-3);

  printf(">> Double Complex Array\n");
  zabsa(in, 4, out);
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
