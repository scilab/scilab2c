/*
**  -*- C -*-
**
** ztanhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Fri Feb 23 17:30:25 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"
#include "tan.h"

doubleComplex		ztanhs(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  doubleComplex result = ztans(DoubleComplex(-imag, real));
  return (DoubleComplex(zimags(result), -zreals(result)));
}
