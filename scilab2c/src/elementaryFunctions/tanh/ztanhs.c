/*
**  -*- C -*-
**
** ztanhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Tue Feb 13 10:47:24 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

doubleComplex		ztans(doubleComplex);

doubleComplex		ztanhs(doubleComplex z) {
  double real = creal(z);
  double imag = cimag(z);

  doubleComplex result = ztans(DoubleComplex(-imag, real));
  return (DoubleComplex(cimag(result), -creal(result)));
  return (DoubleComplex(0,1));
}
