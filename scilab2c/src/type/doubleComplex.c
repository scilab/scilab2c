/*
**  -*- C -*-
**
** doubleComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Thu Dec  7 11:44:05 2006 jofret
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

/*
** \function isreal
** \brief check if complex is real .
*/
bool isreal(doubleComplex z) {
  if (z.imag == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool isimag(doubleComplex z) {
  if (z.real == 0)
    return true;
  return false;
}
