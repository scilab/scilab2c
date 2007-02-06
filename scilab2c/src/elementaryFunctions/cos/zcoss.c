/*
**  -*- C -*-
**
** zcoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Mon Feb  5 17:25:27 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

double	dcoss(double);
double	dcoshs(double);
double	dsins(double);
double	dsinhs(double);

doubleComplex		zcoss(doubleComplex z) {
  double real = creal(z);
  double imag = cimag(z);

  return DoubleComplex(dcoss(real) * dcoshs(imag),
		      -dsins(real) * dsinhs(imag));
}
