/*
**  -*- C -*-
**
** cabss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 17:08:52 2007 jofret
** Last update Mon Apr 23 17:10:22 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

float cabss(floatComplex in) {
  float real = creals(in);
  float imag = cimags(in);
  return (ssqrts( (real*real) + (imag*imag) ));
}
