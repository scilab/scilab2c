/*
**  -*- C -*-
**
** zexps.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Fri Feb  9 17:01:19 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

double	dexps(double);
double	dcoss(double);
double	dsins(double);

doubleComplex		zexps(doubleComplex z) {
  double real = creal(z);
  double imag = cimag(z);

  return DoubleComplex(dexps(real)*dcoss(imag),
		      dexps(real)*dsins(imag));
}
