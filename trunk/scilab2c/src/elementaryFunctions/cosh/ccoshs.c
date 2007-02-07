/*
**  -*- C -*-
**
** ccoshs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Tue Feb  6 10:46:56 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

floatComplex	ccoss(floatComplex);

/** ch(z) = cos(i.z) */
floatComplex		ccoshs(floatComplex z) {
  float real = creal(z);
  float minusImag = -cimag(z);

  return (ccoss(FloatComplex(minusImag, real)));
}
