/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Fri Mar 23 17:05:00 2007 jofret
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
  floatComplex z = FloatComplex((float)-3, (float)25);
  printf("Partie reelle = %f\n", creals(z));
  assert(creals(z) == (float)-3.0);
  printf("Partie imaginaire = %f\n", cimags(z));
  assert(cimags(z) == (float)25);

  /* z = -3.123456 + 25.123456*%i */
  z = FloatComplex((float)-3.123456,(float)25.123456);
  printf("Partie reelle = %f\n", creals(z));
  assert(creals(z) == (float)-3.123456);
  printf("Partie imaginaire = %f\n", cimags(z));
  assert(cimags(z) == (float)25.123456);


  return 0;
}
