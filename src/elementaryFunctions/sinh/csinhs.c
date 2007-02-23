/*
**  -*- C -*-
**
** csinhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 12:04:39 2006 jofret
** Last update Fri Feb 23 17:22:29 2007 jofret
**
** Copyright INRIA 2006
*/

#include "sinh.h"
#include "sin.h"

floatComplex csinhs(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  floatComplex result = csins(FloatComplex(-imag, real));
  return (FloatComplex(cimags(result), -creals(result)));
}
