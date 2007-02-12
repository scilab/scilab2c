/*
**  -*- C -*-
**
** zsinhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:06:35 2006 jofret
** Last update Mon Feb 12 16:38:29 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

doubleComplex	zsins(doubleComplex);

doubleComplex	zsinhs(doubleComplex z) {
  double real = creal(z);
  double imag = cimag(z);

  doubleComplex result = zsins(DoubleComplex(-imag, real));
  return (DoubleComplex(cimag(result), -creal(result)));
}
