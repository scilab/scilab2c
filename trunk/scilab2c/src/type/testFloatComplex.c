/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Mon Oct 22 10:22:19 2007 bruno
**
** Copyright INRIA 2006
*/

#include <stdio.h>
#include <assert.h>
#include <float.h>
#include <complex.h>
#include "floatComplex.h"


int main(int argc, char **argv) {
  /* z = -3 + 25*%i */
  floatComplex z = FloatComplex((float)3, (float)-25);
  /* y = -3.123456 + 25.123456*%i */
  floatComplex y = FloatComplex((float)-3.123,(float)25.123);
  /* t = z + y */
  floatComplex t = cadds(z,y);
  /* u = z - y */
  floatComplex u = cdiffs(z,y);


  /* z = -3 + 25*%i */
  printf("Partie reelle = %f\n", creals(z));
  assert(creals(z) == (float)3);
  printf("Partie imaginaire = %f\n", cimags(z));
  assert(cimags(z) == (float)-25);

  /* y = -3.123456 + 25.123456*%i */
  printf("Partie reelle = %f\n", creals(y));
  assert(creals(y) == (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(y));
  assert(cimags(y) == (float)25.123);

  /* Try to have somme addition */
  printf("Partie reelle = %f\n", creals(t));
  assert(creals(t) == (float)3 + (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(t));
  assert(cimags(t) == (float)-25 + (float)25.123);

  /* Try to have somme diff */
  printf("Partie reelle = %f\n", creals(u));
  assert(creals(u) == (float)3 - (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(u));
  assert(cimags(u) == (float)-25 - (float)25.123);

  return 0;
}
