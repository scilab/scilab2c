/*
**  -*- C -*-
**
** ctanhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Tue Feb 13 11:03:07 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

floatComplex		ctans(floatComplex);

floatComplex		ctanhs(floatComplex z) {
  float real = creal(z);
  float imag = cimag(z);

  floatComplex result = ctans(FloatComplex(-imag, real));
  return (FloatComplex(cimag(result), -creal(result)));
  return z;
}
