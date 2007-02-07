/*
**  -*- C -*-
**
** zsins.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:06:35 2006 jofret
** Last update Tue Feb  6 17:24:03 2007 jofret
**
** Copyright INRIA 2006
*/

#include "doubleComplex.h"

double	dsins(double);
double	dcoss(double);
double	dsinhs(double);
double	dcoshs(double);

doubleComplex	zsins(doubleComplex z) {
  double real = creal(z);
  double imag = cimag(z);

  return(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag)));
}
