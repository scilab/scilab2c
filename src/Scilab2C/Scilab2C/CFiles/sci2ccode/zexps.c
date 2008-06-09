/*
**  -*- C -*-
**
** zexps.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Fri Feb 23 17:08:38 2007 jofret
**
** Copyright INRIA 2006
*/

#include "exp.h"
#include "cos.h"
#include "sin.h"

doubleComplex		zexps(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  return DoubleComplex(dexps(real)*dcoss(imag),
		      dexps(real)*dsins(imag));
}
