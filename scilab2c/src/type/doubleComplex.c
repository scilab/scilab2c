/*
**  -*- C -*-
**
** doubleComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Thu Nov 30 17:59:50 2006 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"


/*
** \function real
** \brief Return a Complex Real Part .
*/
double real(doubleComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
double imag(doubleComplex z) {
  return z.imag;
}

/*
** \function DoubleComplex
** \brief construct a Double Complex .
*/
doubleComplex DoubleComplex(double real, double imag) {
  doubleComplex z;
  z.real = real;
  z.imag = imag;
  return z;
}
