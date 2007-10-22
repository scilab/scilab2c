/*
**  -*- C -*-
**
** testAsinh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Mon Oct 22 14:17:39 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testAsinh.h"

void sasinhsTest(void) {
  printf(">> Float scalar\n");
  printf("sasinhs(0) = %f\n", sasinhs((float) 0));
  printf("sasinhs(PI) = %f\n", sasinhs(PI));
  printf("sasinhs(PI/2) = %f\n", sasinhs(PI/2));
  printf("sasinhs(PI/3) = %f\n", sasinhs(PI/3));
  printf("sasinhs(PI/4) = %f\n", sasinhs(PI/4));
  printf("sasinhs(PI/6) = %f\n", sasinhs(PI/6));
  printf("sasinhs(-PI) = %f\n", sasinhs(-PI));
  printf("sasinhs(-PI/2) = %f\n", sasinhs(-PI/2));
  printf("sasinhs(-PI/3) = %f\n", sasinhs(-PI/3));
  printf("sasinhs(-PI/4) = %f\n", sasinhs(-PI/4));
  printf("sasinhs(-PI/6) = %f\n", sasinhs(-PI/6));
}

void dasinhsTest(void) {
  printf(">> Double scalar\n");
  printf("dasinhs(0) = %e\n", dasinhs((double) 0));
  printf("dasinhs(PI) = %e\n", dasinhs(PI));
  printf("dasinhs(PI/2) = %e\n", dasinhs(PI/2));
  printf("dasinhs(PI/3) = %e\n", dasinhs(PI/3));
  printf("dasinhs(PI/4) = %e\n", dasinhs(PI/4));
  printf("dasinhs(PI/6) = %e\n", dasinhs(PI/6));
  printf("dasinhs(-PI) = %e\n", dasinhs(-PI));
  printf("dasinhs(-PI/2) = %e\n", dasinhs(-PI/2));
  printf("dasinhs(-PI/3) = %e\n", dasinhs(-PI/3));
  printf("dasinhs(-PI/4) = %e\n", dasinhs(-PI/4));
  printf("dasinhs(-PI/6) = %e\n", dasinhs(-PI/6));
}

void casinhsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = casinhs(pi_pi);
  printf("casinhs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_2);
  printf("casinhs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_3);
  printf("casinhs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_4);
  printf("casinhs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zasinhsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zasinhs(pi_pi);
  printf("zasinhs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_2);
  printf("zasinhs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_3);
  printf("zasinhs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_4);
  printf("zasinhs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void sasinhaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  sasinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasinha(array) = %f\n", out[i]);
}

void dasinhaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dasinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasinha(array) = %f\n", out[i]);

}

void casinhaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(PI, PI);
  in[1] = FloatComplex(PI/2, PI/2);
  in[2] = FloatComplex(PI/2, PI/3);
  in[3] = FloatComplex(PI/2, PI/4);

  casinha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("casinha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zasinhaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(PI, PI);
  in[1] = DoubleComplex(PI/2, PI/2);
  in[2] = DoubleComplex(PI/2, PI/3);
  in[3] = DoubleComplex(PI/2, PI/4);

  zasinha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zasinha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAsinh(void) {
  printf("\n>>>> ArcSinhe Tests\n");
  sasinhsTest();
  dasinhsTest();
  casinhsTest();
  zasinhsTest();
  sasinhaTest();
  dasinhaTest();
  casinhaTest();
  zasinhaTest();
  return 0;
}

int main(void) {
  assert(testAsinh() == 0);
  return 0;
}
