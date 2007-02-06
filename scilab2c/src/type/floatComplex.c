/*
**  -*- C -*-
**
** floatComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Mon Feb  5 17:19:08 2007 jofret
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
#include "floatComplex.h"
#else
#include "floatComplexC99.h"
#endif

#ifndef STDC99
/*
** \function real
** \brief Return a Complex Real Part .
*/
float creal(floatComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimag(floatComplex z) {
  return z.imag;
}
#endif

/*
** \function FloatComplex
** \brief construct a Float Complex .
*/
floatComplex FloatComplex(float real, float imag) {
  floatComplex z;
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
bool isreal(floatComplex z) {
  if (creal(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool isimag(floatComplex z) {
  if (cimag(z) == 0)
    return true;
  return false;
}
