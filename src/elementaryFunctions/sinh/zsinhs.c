/*
**  -*- C -*-
**
** zsinhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:06:35 2006 jofret
** Last update Fri Feb 23 17:23:10 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"
#include "sin.h"

doubleComplex	zsinhs(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  doubleComplex result = zsins(DoubleComplex(-imag, real));
  return (DoubleComplex(zimags(result), -zreals(result)));
}
