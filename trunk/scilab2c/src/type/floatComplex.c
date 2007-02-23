/*
**  -*- C -*-
**
** floatComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Fri Feb 23 16:19:54 2007 jofret
**
** Copyright INRIA 2006
*/

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
  return creal(z);
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimags(floatComplex z) {
  return creal(z);
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
bool cisreals(floatComplex z) {
  if (creals(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool cisimags(floatComplex z) {
  if (cimags(z) == 0)
    return true;
  return false;
}
