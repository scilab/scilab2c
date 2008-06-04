/*
**  -*- C -*-
**
** zcoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Fri Feb 23 16:35:32 2007 jofret
**
** Copyright INRIA 2006
*/

#include "cos.h"
#include "sin.h"
#include "cosh.h"
#include "sinh.h"

doubleComplex		zcoss(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  return DoubleComplex(dcoss(real) * dcoshs(imag),
		      -dsins(real) * dsinhs(imag));
}
