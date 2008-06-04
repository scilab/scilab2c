/*
**  -*- C -*-
**
** zcoshs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Fri Feb 23 16:48:33 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cosh.h"
#include "cos.h"

doubleComplex		zcoshs(doubleComplex z) {
  double real = zreals(z);
  double minusImag = -zimags(z);

  return (zcoss(DoubleComplex(minusImag, real)));
}
