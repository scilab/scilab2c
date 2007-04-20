/*
**  -*- C -*-
**
** testSinh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Fri Apr 20 16:44:27 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testSinh.h"

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

void csinhsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = csinhs(pi_pi);
  printf("csinhs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_2);
  printf("csinhs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_3);
  printf("csinhs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_4);
  printf("csinhs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zsinhsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zsinhs(pi_pi);
  printf("zsinhs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_2);
  printf("zsinhs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_3);
  printf("zsinhs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_4);
  printf("zsinhs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void ssinhaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  ssinha(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssinha(array) = %f\n", out[i]);
}

void dsinhaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dsinha(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssinha(array) = %f\n", out[i]);

}

void csinhaTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4};
  floatComplex out[4];
  int i = 0;

  csinha(in, out, 4);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("csinha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zsinhaTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4 };
  doubleComplex out[4];
  int i = 0;

  zsinha(in, out, 4);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zsinha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testSinh() {
  printf("\n>>>> Hyperbolic Sine Tests\n");
  ssinhsTest();
  dsinhsTest();
  csinhsTest();
  zsinhsTest();
  ssinhaTest();
  dsinhaTest();
  csinhaTest();
  zsinhaTest();
  return 0;
}

int main() {
  assert(testSinh() == 0);
  return 0;
}
