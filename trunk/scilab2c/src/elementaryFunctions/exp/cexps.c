/*
**  -*- C -*-
**
** cexps.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Feb 23 17:08:27 2007 jofret
**
** Copyright INRIA 2006
*/

#include "exp.h"
#include "cos.h"
#include "sin.h"

floatComplex		cexps(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  return FloatComplex(sexps(real)*scoss(imag),
		      sexps(real)*ssins(imag));
}
