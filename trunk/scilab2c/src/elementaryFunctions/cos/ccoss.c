/*
**  -*- C -*-
**
** ccoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Mon Feb  5 17:24:00 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

float	scoss(float);
float	scoshs(float);
float	ssins(float);
float	ssinhs(float);

floatComplex		ccoss(floatComplex z) {
  float real = creal(z);
  float imag = cimag(z);

  return FloatComplex(scoss(real) * scoshs(imag),
		      -ssins(real) * ssinhs(imag));
}
