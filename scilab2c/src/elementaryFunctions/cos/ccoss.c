/*
**  -*- C -*-
**
** ccoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Feb 23 16:35:12 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"
#include "sin.h"
#include "cosh.h"
#include "sinh.h"

floatComplex		ccoss(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  return FloatComplex(scoss(real) * scoshs(imag),
		      -ssins(real) * ssinhs(imag));
}
