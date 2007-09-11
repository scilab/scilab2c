/*
**  -*- C -*-
**
** cexp10s.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Thu Sep  6 17:09:51 2007 bruno
**
** Copyright INRIA 2006
*/

#include "exp10.h"

floatComplex		cexp10s(floatComplex z) {
  float real = creals(z);
  float imag = cimags(z);

  /* FIXME : Let's code... */
  return FloatComplex(real, imag);
}
