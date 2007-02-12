/*
**  -*- C -*-
**
** csinhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:04:39 2006 jofret
** Last update Mon Feb 12 16:15:52 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

floatComplex	csins(floatComplex);

floatComplex csinhs(floatComplex z) {
  float real = creal(z);
  float imag = cimag(z);

  floatComplex result = csins(FloatComplex(-imag, real));
  return (FloatComplex(cimag(result), -creal(result)));
}
