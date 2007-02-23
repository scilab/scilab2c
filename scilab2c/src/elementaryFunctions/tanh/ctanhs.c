/*
**  -*- C -*-
**
** ctanhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Feb 23 17:31:52 2007 jofret
**
** Copyright INRIA 2006
*/

#include "tanh.h"
#include "tan.h"

floatComplex		ctanhs(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  floatComplex result = ctans(FloatComplex(-imag, real));
  return (FloatComplex(cimags(result), -creals(result)));
}
