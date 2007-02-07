/*
**  -*- C -*-
**
** csins.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:04:39 2006 jofret
** Last update Tue Feb  6 15:56:55 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"

float	ssins(float);
float	scoss(float);
float	ssinhs(float);
float	scoshs(float);

floatComplex csins(floatComplex z) {
  float real = creal(z);
  float imag = cimag(z);

  return(FloatComplex(ssins(real) * scoshs(imag), scoss(real) * ssinhs(imag)));
}
