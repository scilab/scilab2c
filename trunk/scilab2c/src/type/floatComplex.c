/*
**  -*- C -*-
**
** floatComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Fri Apr 20 11:03:44 2007 jofret
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

#include <stdio.h>
#include "floatComplex.h"

#ifndef STDC99
/*
** \function real
** \brief Return a Complex Real Part .
*/
float creals(floatComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimags(floatComplex z) {
  return z.imag;
}
#else
/*
** \function real
** \brief Return a Complex Real Part .
*/
float creals(floatComplex z) {
  return crealf(z);
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimags(floatComplex z) {
  return cimagf(z);
}
#endif

/*
** \function FloatComplex
** \brief construct a Float Complex .
*/
floatComplex FloatComplex(float a, float b) {
  floatComplex z;
#ifndef STDC99
  z.real = a;
  z.imag = b;
#else
  z = a + I * b;
#endif
  return z;
}

/*
** \function isreal
** \brief check if complex is real .
*/
bool cisreals(floatComplex z) {
  if (cimags(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool cisimags(floatComplex z) {
  if (creals(z) == 0)
    return true;
  return false;
}
