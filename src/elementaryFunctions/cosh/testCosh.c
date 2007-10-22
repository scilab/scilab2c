/*
**  -*- C -*-
**
** testCosh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Mon Oct 22 11:52:54 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testCosh.h"

void scoshsTest(void) {
  printf(">> Float scalar\n");
  printf("scoshs(0) = %f\n", scoshs((float) 0));
  printf("scoshs(PI) = %f\n", scoshs(PI));
  printf("scoshs(PI/2) = %f\n", scoshs(PI/2));
  printf("scoshs(PI/3) = %f\n", scoshs(PI/3));
  printf("scoshs(PI/4) = %f\n", scoshs(PI/4));
  printf("scoshs(PI/6) = %f\n", scoshs(PI/6));
  printf("scoshs(-PI) = %f\n", scoshs(-PI));
  printf("scoshs(-PI/2) = %f\n", scoshs(-PI/2));
  printf("scoshs(-PI/3) = %f\n", scoshs(-PI/3));
  printf("scoshs(-PI/4) = %f\n", scoshs(-PI/4));
  printf("scoshs(-PI/6) = %f\n", scoshs(-PI/6));
}

void dcoshsTest(void) {
  printf(">> Double scalar\n");
  printf("dcoshs(0) = %e\n", dcoshs((double) 0));
  printf("dcoshs(PI) = %e\n", dcoshs(PI));
  printf("dcoshs(PI/2) = %e\n", dcoshs(PI/2));
  printf("dcoshs(PI/3) = %e\n", dcoshs(PI/3));
  printf("dcoshs(PI/4) = %e\n", dcoshs(PI/4));
  printf("dcoshs(PI/6) = %e\n", dcoshs(PI/6));
  printf("dcoshs(-PI) = %e\n", dcoshs(-PI));
  printf("dcoshs(-PI/2) = %e\n", dcoshs(-PI/2));
  printf("dcoshs(-PI/3) = %e\n", dcoshs(-PI/3));
  printf("dcoshs(-PI/4) = %e\n", dcoshs(-PI/4));
  printf("dcoshs(-PI/6) = %e\n", dcoshs(-PI/6));
}

void ccoshsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = ccoshs(pi_pi);
  printf("ccoshs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_2);
  printf("ccoshs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_3);
  printf("ccoshs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_4);
  printf("ccoshs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zcoshsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zcoshs(pi_pi);
  printf("zcoshs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_2);
  printf("zcoshs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_3);
  printf("zcoshs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_4);
  printf("zcoshs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void scoshaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  scosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosha(array) = %f\n", out[i]);
}

void dcoshaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dcosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosha(array) = %f\n", out[i]);

}

void ccoshaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(PI, PI);
  in[1] = FloatComplex(PI/2, PI/2);
  in[2] = FloatComplex(PI/2, PI/3);
  in[3] = FloatComplex(PI/2, PI/4);

  ccosha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("ccosha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zcoshaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(PI, PI);
  in[1] = DoubleComplex(PI/2, PI/2);
  in[2] = DoubleComplex(PI/2, PI/3);
  in[3] = DoubleComplex(PI/2, PI/4);

  zcosha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zcosha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testCosh(void) {
  printf("\n>>>> Hyperbolic Cosine Tests\n");
  scoshsTest();
  dcoshsTest();
  ccoshsTest();
  zcoshsTest();
  scoshaTest();
  dcoshaTest();
  ccoshaTest();
  zcoshaTest();
  return 0;
}

int main(void) {
  assert(testCosh() == 0);
  return 0;
}
