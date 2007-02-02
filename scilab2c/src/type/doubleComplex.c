/*
**  -*- C -*-
**
** doubleComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Fri Feb  2 15:40:47 2007 jofret
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
#include "doubleComplex.h"
#else
#include "doubleComplexC99.h"
#endif

#ifndef STDC99
/*
** \function creal
** \brief Return a Complex Real Part .
*/
double creal(doubleComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
double cimag(doubleComplex z) {
  return z.imag;
}
#endif

/*
** \function DoubleComplex
** \brief construct a Double Complex .
*/
doubleComplex DoubleComplex(double real, double imag) {
  doubleComplex z;
#ifndef STDC99
  z.real = real;
  z.imag = imag;
#else
  z = real + I * imag;
#endif
  return z;
}

/*
** \function isreal
** \brief check if complex is real .
*/
bool isreal(doubleComplex z) {
  if (cimag(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool isimag(doubleComplex z) {
  if (creal(z) == 0)
    return true;
  return false;
}
