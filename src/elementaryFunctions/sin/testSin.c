/*
**  -*- C -*-
**
** testSin.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Mon Oct 22 12:05:02 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testSin.h"

void ssinsTest() {
  printf(">> Float scalar\n");
  printf("ssins(0) = %f\n", ssins((float) 0));
  printf("ssins(PI) = %f\n", ssins(PI));
  printf("ssins(PI/2) = %f\n", ssins(PI/2));
  printf("ssins(PI/3) = %f\n", ssins(PI/3));
  printf("ssins(PI/4) = %f\n", ssins(PI/4));
  printf("ssins(PI/6) = %f\n", ssins(PI/6));
  printf("ssins(-PI) = %f\n", ssins(-PI));
  printf("ssins(-PI/2) = %f\n", ssins(-PI/2));
  printf("ssins(-PI/3) = %f\n", ssins(-PI/3));
  printf("ssins(-PI/4) = %f\n", ssins(-PI/4));
  printf("ssins(-PI/6) = %f\n", ssins(-PI/6));
}

void dsinsTest() {
  printf(">> Double scalar\n");
  printf("dsins(0) = %e\n", dsins((double) 0));
  printf("dsins(PI) = %e\n", dsins(PI));
  printf("dsins(PI/2) = %e\n", dsins(PI/2));
  printf("dsins(PI/3) = %e\n", dsins(PI/3));
  printf("dsins(PI/4) = %e\n", dsins(PI/4));
  printf("dsins(PI/6) = %e\n", dsins(PI/6));
  printf("dsins(-PI) = %e\n", dsins(-PI));
  printf("dsins(-PI/2) = %e\n", dsins(-PI/2));
  printf("dsins(-PI/3) = %e\n", dsins(-PI/3));
  printf("dsins(-PI/4) = %e\n", dsins(-PI/4));
  printf("dsins(-PI/6) = %e\n", dsins(-PI/6));
}

void csinsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = csins(pi_pi);
  printf("csins(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_2);
  printf("csins(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_3);
  printf("csins(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_4);
  printf("csins(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zsinsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zsins(pi_pi);
  printf("zsins(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_2);
  printf("zsins(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_3);
  printf("zsins(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_4);
  printf("zsins(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void ssinaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  ssina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssina(array) = %f\n", out[i]);
}

void dsinaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dsina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssina(array) = %f\n", out[i]);

}

void csinaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(PI, PI);
  in[1] = FloatComplex(PI/2, PI/2);
  in[2] = FloatComplex(PI/2, PI/3);
  in[3] = FloatComplex(PI/2, PI/4);

  csina(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("csina(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zsinaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(PI, PI);
  in[1] = DoubleComplex(PI/2, PI/2);
  in[2] = DoubleComplex(PI/2, PI/3);
  in[3] = DoubleComplex(PI/2, PI/4);

  zsina(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zsina(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testSin() {
  printf("\n>>>> Sine Tests\n");
  ssinsTest();
  dsinsTest();
  csinsTest();
  zsinsTest();
  ssinaTest();
  dsinaTest();
  csinaTest();
  zsinaTest();
  return 0;
}

int main(void) {
  assert(testSin() == 0);
  return 0;
}
