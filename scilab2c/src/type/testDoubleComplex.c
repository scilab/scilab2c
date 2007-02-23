/*
**  -*- C -*-
**
** main.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:59:04 2006 jofret
** Last update Fri Feb 23 16:19:35 2007 jofret
**
** Copyright INRIA 2006
*/

#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif

#ifndef STDC99
#  include <stdio.h>
#  include "doubleComplex.h"
#else
#  include <stdio.h>
#  include <complex.h>
#  include "doubleComplexC99.h"
#endif


int main(int argc, char **argv) {
  /* z = -3 + 25*%i */
  doubleComplex z = DoubleComplex(-3,25);
  printf("Partie reelle = %f\n", zreals(z));
  printf("Partie imaginaire = %f\n", zimags(z));
  return 0;
}
