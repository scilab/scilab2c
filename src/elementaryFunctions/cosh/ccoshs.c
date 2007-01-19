/*
**  -*- C -*-
**
** ccoshs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Fri Jan 19 14:56:26 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef STDC99
#include "floatComplex.h"
#else
#include <complex.h>
typedef float complex floatComplex;
#endif

floatComplex		ccoshs(floatComplex z) {
  /* FIXME: Dummy... */
  return z;
}
