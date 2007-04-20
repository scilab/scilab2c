/*
**  -*- C -*-
**
** testAsin.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Fri Apr 20 10:32:47 2007 jofret
**
** Copyright INRIA 2006
*/

#include "testAsin.h"

void sasinsTest(void) {
  printf(">> Float scalar\n");
  printf("sasins(0) = %f\n", sasins((float) 0));
  printf("sasins(PI) = %f\n", sasins(PI));
  printf("sasins(PI/2) = %f\n", sasins(PI/2));
  printf("sasins(PI/3) = %f\n", sasins(PI/3));
  printf("sasins(PI/4) = %f\n", sasins(PI/4));
  printf("sasins(PI/6) = %f\n", sasins(PI/6));
  printf("sasins(-PI) = %f\n", sasins(-PI));
  printf("sasins(-PI/2) = %f\n", sasins(-PI/2));
  printf("sasins(-PI/3) = %f\n", sasins(-PI/3));
  printf("sasins(-PI/4) = %f\n", sasins(-PI/4));
  printf("sasins(-PI/6) = %f\n", sasins(-PI/6));
}

void dasinsTest(void) {
  printf(">> Double scalar\n");
  printf("dasins(0) = %e\n", dasins((double) 0));
  printf("dasins(PI) = %e\n", dasins(PI));
  printf("dasins(PI/2) = %e\n", dasins(PI/2));
  printf("dasins(PI/3) = %e\n", dasins(PI/3));
  printf("dasins(PI/4) = %e\n", dasins(PI/4));
  printf("dasins(PI/6) = %e\n", dasins(PI/6));
  printf("dasins(-PI) = %e\n", dasins(-PI));
  printf("dasins(-PI/2) = %e\n", dasins(-PI/2));
  printf("dasins(-PI/3) = %e\n", dasins(-PI/3));
  printf("dasins(-PI/4) = %e\n", dasins(-PI/4));
  printf("dasins(-PI/6) = %e\n", dasins(-PI/6));
}

void casinsTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = casins(pi_pi);
  printf("casins(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_2);
  printf("casins(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_3);
  printf("casins(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_4);
  printf("casins(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void zasinsTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zasins(pi_pi);
  printf("zasins(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_2);
  printf("zasins(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_3);
  printf("zasins(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_4);
  printf("zasins(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void sasinaTest(void) {
  float out[5];
  float in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Float array\n");
  sasina(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasina(array) = %f\n", out[i]);
}

void dasinaTest(void) {
  double out[5];
  double in[5] = {PI, PI/2, PI/3, PI/4, PI/6};
  int i = 0;

  printf(">> Double Array\n");
  dasina(in, out, 5);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasina(array) = %f\n", out[i]);

}

void casinaTest(void) {
  floatComplex pi_pi = FloatComplex(PI, PI);
  floatComplex pi_2_pi_2 = FloatComplex(PI/2, PI/2);
  floatComplex pi_2_pi_3 = FloatComplex(PI/2, PI/3);
  floatComplex pi_2_pi_4 = FloatComplex(PI/2, PI/4);
  floatComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4};
  floatComplex out[4];
  int i = 0;

  casina(in, out, 4);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("casina(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

void zasinaTest(void) {
  doubleComplex pi_pi = DoubleComplex(PI, PI);
  doubleComplex pi_2_pi_2 = DoubleComplex(PI/2, PI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(PI/2, PI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(PI/2, PI/4);
  doubleComplex in[4] = {pi_pi, pi_2_pi_2, pi_2_pi_3, pi_2_pi_4 };
  doubleComplex out[4];
  int i = 0;

  zasina(in, out, 4);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zasina(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAsin(void) {
  printf("\n>>>> ArcSine Tests\n");
  sasinsTest();
  dasinsTest();
  casinsTest();
  zasinsTest();
  sasinaTest();
  dasinaTest();
  casinaTest();
  zasinaTest();
  return 0;
}

int main(void) {
  assert(testAsin() == 0);
  return 0;
}
