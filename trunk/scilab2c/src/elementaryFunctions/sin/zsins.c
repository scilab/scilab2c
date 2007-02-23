/*
**  -*- C -*-
**
** zsins.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:06:35 2006 jofret
** Last update Fri Feb 23 17:14:02 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"

doubleComplex	zsins(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  return(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag)));
}
