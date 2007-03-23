/*
**  -*- C -*-
**
** doubleComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Fri Mar 23 14:41:36 2007 jofret
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

#include "doubleComplex.h"

#ifndef STDC99
/*
** \function zreals
** \brief Return a Complex Real Part .
*/
double zreals(doubleComplex z) {
  return z.real;
}

/*
** \function zimags
** \brief Return a Complex Imaginary Part .
*/
double zimags(doubleComplex z) {
  return z.imag;
}
#else
/*
** \function zreals
** \brief Return a Complex Real Part .
*/
double zreals(doubleComplex z) {
  return creal(z);
}

/*
** \function zimags
** \brief Return a Complex Imaginary Part .
*/
double zimags(doubleComplex z) {
  return cimag(z);
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
bool zisreals(doubleComplex z) {
  if (zimags(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool zisimags(doubleComplex z) {
  if (zreals(z) == 0)
    return true;
  return false;
}
