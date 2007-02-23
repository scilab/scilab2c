/*
**  -*- C -*-
**
** csins.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:04:39 2006 jofret
** Last update Fri Feb 23 17:13:53 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"

floatComplex csins(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  return(FloatComplex(ssins(real) * scoshs(imag), scoss(real) * ssinhs(imag)));
}
