/*
**  -*- C -*-
**
** floatComplex.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:27:08 2006 jofret
** Last update Thu Dec  7 11:44:05 2006 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

/*
** \function real
** \brief Return a Complex Real Part .
*/
float real(floatComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float imag(floatComplex z) {
  return z.imag;
}

/*
** \function FloatComplex
** \brief construct a Float Complex .
*/
floatComplex FloatComplex(float real, float imag) {
  floatComplex z;
  z.real = real;
  z.imag = imag;
  return z;
}

/*
** \function isreal
** \brief check if complex is real .
*/
bool isreal(floatComplex z) {
  if (z.imag == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool isimag(floatComplex z) {
  if (z.real == 0)
    return true;
  return false;
}
