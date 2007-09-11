/*
**  -*- C -*-
**
** zexp10s.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Thu Sep  6 16:56:19 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp10.h"
#include "cos.h"
#include "sin.h"

doubleComplex		zexp10s(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  return DoubleComplex(dexp10s(real)*dcoss(imag),
		      dexp10s(real)*dsins(imag));
}
