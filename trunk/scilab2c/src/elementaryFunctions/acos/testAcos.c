/*
**  -*- C -*-
**
** testAcos.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Apr 20 10:24:42 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testAcos.h"

void sacossTest(void) {
  printf(">> Float scalar\n");
  printf("sacoss(0) = %f\n", sacoss((float) 0));
  printf("sacoss(PI) = %f\n", sacoss(PI));
  printf("sacoss(PI/2) = %f\n", sacoss(PI/2));
  printf("sacoss(PI/3) = %f\n", sacoss(PI/3));
  printf("sacoss(PI/4) = %f\n", sacoss(PI/4));
  printf("sacoss(PI/6) = %f\n", sacoss(PI/6));
  printf("sacoss(-PI) = %f\n", sacoss(-PI));
  printf("sacoss(-PI/2) = %f\n", sacoss(-PI/2));
  printf("sacoss(-PI/3) = %f\n", sacoss(-PI/3));
  printf("sacoss(-PI/4) = %f\n", sacoss(-PI/4));
  printf("sacoss(-PI/6) = %f\n", sacoss(-PI/6));
}

void dacossTest(void) {
  printf(">> Double scalar\n");
  printf("dacoss(0) = %e\n", dacoss((double) 0));
  printf("dacoss(PI) = %e\n", dacoss(PI));
  printf("dacoss(PI/2) = %e\n", dacoss(PI/2));
  printf("dacoss(PI/3) = %e\n", dacoss(PI/3));
  printf("dacoss(PI/4) = %e\n", dacoss(PI/4));
  printf("dacoss(PI/6) = %e\n", dacoss(PI/6));
  printf("dacoss(-PI) = %e\n", dacoss(-PI));
  printf("dacoss(-PI/2) = %e\n", dacoss(-PI/2));
  printf("dacoss(-PI/3) = %e\n", dacoss(-PI/3));
  printf("dacoss(-PI/4) = %e\n", dacoss(-PI/4));
  printf("dacoss(-PI/6) = %e\n", dacoss(-PI/6));
}

void cacossTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = cacoss(pi_pi);
  printf("cacoss(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_2);
  printf("cacoss(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_3);
  printf("cacoss(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_4);
  printf("cacoss(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zacossTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zacoss(pi_pi);
  printf("zacoss(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_2);
  printf("zacoss(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_3);
  printf("zacoss(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_4);
  printf("zacoss(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void sacosaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  sacosa(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosa(array) = %f\n", out[i]);
}

void dacosaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dacosa(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosa(array) = %f\n", out[i]);

}

void cacosaTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4};
  floatComplex out[4];
  int i = 0;

  cacosa(in, out, 4);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("cacosa(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zacosaTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4 };
  doubleComplex out[4];
  int i = 0;

  zacosa(in, out, 4);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zacosa(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAcos(void) {
  printf("\n>>>> ArcCosine Tests\n");
  sacossTest();
  dacossTest();
  cacossTest();
  zacossTest();
  sacosaTest();
  dacosaTest();
  cacosaTest();
  zacosaTest();
  return 0;
}

int main(void) {
  assert(testAcos() == 0);
  return 0;
}
