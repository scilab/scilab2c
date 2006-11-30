/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Thu Nov 30 17:55:50 2006 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#include "doubleComplex.h"

int main(int argc, char **argv) {
  /* z = 1 + %i */
  doubleComplex z = DoubleComplex(-3,25);
  printf("Partie reelle = %f\n", real(z));
  printf("Partie imaginaire = %f\n", imag(z));
  return 0;
}
