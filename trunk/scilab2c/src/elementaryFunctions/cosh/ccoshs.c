/*
**  -*- C -*-
**
** ccoshs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Feb 23 16:48:08 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cosh.h"
#include "cos.h"

/** ch(z) = cos(i.z) */
floatComplex		ccoshs(floatComplex z) {
  float real = creals(z);
  float minusImag = -cimags(z);

  return (ccoss(FloatComplex(minusImag, real)));
}
