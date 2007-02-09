/*
**  -*- C -*-
**
** cexps.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Feb  9 17:00:38 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

float	sexps(float);
float	scoss(float);
float	ssins(float);

floatComplex		cexps(floatComplex z) {
  float real = creal(z);
  float imag = cimag(z);

  return FloatComplex(sexps(real)*scoss(imag),
		      sexps(real)*ssins(imag));
}
