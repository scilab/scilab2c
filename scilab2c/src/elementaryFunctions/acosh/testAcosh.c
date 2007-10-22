/*
**  -*- C -*-
**
** testAcosh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Mon Oct 22 11:58:49 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testAcosh.h"

void sacoshsTest(void) {
  printf(">> Float scalar\n");
  printf("sacoshs(0) = %f\n", sacoshs((float) 0));
  printf("sacoshs(PI) = %f\n", sacoshs(PI));
  printf("sacoshs(PI/2) = %f\n", sacoshs(PI/2));
  printf("sacoshs(PI/3) = %f\n", sacoshs(PI/3));
  printf("sacoshs(PI/4) = %f\n", sacoshs(PI/4));
  printf("sacoshs(PI/6) = %f\n", sacoshs(PI/6));
  printf("sacoshs(-PI) = %f\n", sacoshs(-PI));
  printf("sacoshs(-PI/2) = %f\n", sacoshs(-PI/2));
  printf("sacoshs(-PI/3) = %f\n", sacoshs(-PI/3));
  printf("sacoshs(-PI/4) = %f\n", sacoshs(-PI/4));
  printf("sacoshs(-PI/6) = %f\n", sacoshs(-PI/6));
}

void dacoshsTest(void) {
  printf(">> Double scalar\n");
  printf("dacoshs(0) = %e\n", dacoshs((double) 0));
  printf("dacoshs(PI) = %e\n", dacoshs(PI));
  printf("dacoshs(PI/2) = %e\n", dacoshs(PI/2));
  printf("dacoshs(PI/3) = %e\n", dacoshs(PI/3));
  printf("dacoshs(PI/4) = %e\n", dacoshs(PI/4));
  printf("dacoshs(PI/6) = %e\n", dacoshs(PI/6));
  printf("dacoshs(-PI) = %e\n", dacoshs(-PI));
  printf("dacoshs(-PI/2) = %e\n", dacoshs(-PI/2));
  printf("dacoshs(-PI/3) = %e\n", dacoshs(-PI/3));
  printf("dacoshs(-PI/4) = %e\n", dacoshs(-PI/4));
  printf("dacoshs(-PI/6) = %e\n", dacoshs(-PI/6));
}

void cacoshsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = cacoshs(pi_pi);
  printf("cacoshs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_2);
  printf("cacoshs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_3);
  printf("cacoshs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_4);
  printf("cacoshs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zacoshsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zacoshs(pi_pi);
  printf("zacoshs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_2);
  printf("zacoshs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_3);
  printf("zacoshs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_4);
  printf("zacoshs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void sacoshaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  sacosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosha(array) = %f\n", out[i]);
}

void dacoshaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dacosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosha(array) = %f\n", out[i]);

}

void cacoshaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(PI, PI);
  in[1] = FloatComplex(PI/2, PI/2);
  in[2] = FloatComplex(PI/2, PI/3);
  in[3] = FloatComplex(PI/2, PI/4);

  cacosha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("cacosha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zacoshaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(PI, PI);
  in[1] = DoubleComplex(PI/2, PI/2);
  in[2] = DoubleComplex(PI/2, PI/3);
  in[3] = DoubleComplex(PI/2, PI/4);

  zacosha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zacosha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAcosh(void) {
  printf("\n>>>> ArcCoshine Tests\n");
  sacoshsTest();
  dacoshsTest();
  cacoshsTest();
  zacoshsTest();
  sacoshaTest();
  dacoshaTest();
  cacoshaTest();
  zacoshaTest();
  return 0;
}

int main(void) {
  assert(testAcosh() == 0);
  return 0;
}
