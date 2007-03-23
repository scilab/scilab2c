/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Fri Mar 23 11:11:25 2007 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>
#include <assert.h>
#include "doubleComplex.h"

int main(int argc, char **argv) {
  /* z = -3 + 25*%i */
  doubleComplex z = DoubleComplex(-3,25);
  printf("Partie reelle = %f\n", zreals(z));
  assert(zreals(z) == -3);
  printf("Partie imaginaire = %f\n", zimags(z));
  assert(zimags(z) == 25);

  /* z = -3.123456 + 25.123456*%i */
  z = DoubleComplex(-3.123456,25.123456);
  printf("Partie reelle = %f\n", zreals(z));
  assert(zreals(z) == (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(z));
  assert(zimags(z) == (double)25.123456);


  return 0;
}
