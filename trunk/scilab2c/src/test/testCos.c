/*
**  -*- C -*-
**
** testCos.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Mar 30 11:12:04 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testCos.h"

void scossTest(void) {
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

void dcossTest(void) {
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

void ccossTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = ccoss(pi_pi);
  printf("ccoss(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_2);
  printf("ccoss(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_3);
  printf("ccoss(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_4);
  printf("ccoss(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zcossTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zcoss(pi_pi);
  printf("zcoss(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_2);
  printf("zcoss(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_3);
  printf("zcoss(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_4);
  printf("zcoss(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void scosaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  scosa(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosa(array) = %f\n", out[i]);
}

void dcosaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dcosa(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosa(array) = %f\n", out[i]);

}

void ccosaTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4};
  floatComplex out[4];
  int i = 0;

  ccosa(in, out, 4);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("ccosa(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zcosaTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4 };
  doubleComplex out[4];
  int i = 0;

  zcosa(in, out, 4);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zcosa(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testCos(void) {
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

int main(void) {
  assert(testCos() == 0);
  return 0;
}
