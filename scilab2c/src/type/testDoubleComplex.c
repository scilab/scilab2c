/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Mon Oct 22 10:21:07 2007 bruno
**
** Copyright INRIA 2006
*/

#include <stdio.h>
#include <assert.h>
#include "doubleComplex.h"

int main(int argc, char **argv) {
  /* z = -3 + 25*%i */
  doubleComplex z = DoubleComplex(3,-25);
  /* y = -3.123456 + 25.123456*%i */
  doubleComplex y = DoubleComplex(-3.123456,25.123456);
  /* t = z + y */
  doubleComplex t = zadds(z,y);
  /* u = z - y */
  doubleComplex u = zdiffs(z,y);


  /* z = -3 + 25*%i */
  printf("Partie reelle = %f\n", zreals(z));
  assert(zreals(z) == (double)3);
  printf("Partie imaginaire = %f\n", zimags(z));
  assert(zimags(z) == (double)-25);

  /* y = -3.123456 + 25.123456*%i */
  printf("Partie reelle = %f\n", zreals(y));
  assert(zreals(y) == (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(y));
  assert(zimags(y) == (double)25.123456);

  /* Try to have somme addition */
  printf("Partie reelle = %f\n", zreals(t));
  assert(zreals(t) == (double)3 + (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(t));
  assert(zimags(t) == (double)-25 + (double)25.123456);

  /* Try to have somme diff */
  printf("Partie reelle = %f\n", zreals(u));
  assert(zreals(u) == (double)3 - (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(u));
  assert(zimags(u) == (double)-25 - (double)25.123456);
  return 0;
}
