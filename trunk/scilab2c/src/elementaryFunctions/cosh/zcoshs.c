/*
**  -*- C -*-
**
** zcoshs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Tue Feb  6 10:48:24 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

doubleComplex	zcoss(doubleComplex);

doubleComplex		zcoshs(doubleComplex z) {
  double real = creal(z);
  double minusImag = -cimag(z);

  return (zcoss(DoubleComplex(minusImag, real)));
}
