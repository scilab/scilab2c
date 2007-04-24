/*
**  -*- C -*-
**
** zabss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 17:03:36 2007 jofret
** Last update Mon Apr 23 17:16:05 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

double zabss(doubleComplex in) {
  double real = zreals(in);
  double imag = zimags(in);
  return (dsqrts( (real*real) + (imag*imag) ));
}
