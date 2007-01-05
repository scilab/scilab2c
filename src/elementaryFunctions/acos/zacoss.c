/*
**  -*- C -*-
**
** zacoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:24:38 2007 jofret
** Last update Fri Jan  5 10:25:02 2007 jofret
**
** Copyright INRIA 2007
*/


#ifndef STDC99
#include "doubleComplex.h"
#else
#include <complex.h>
typedef double complex doubleComplex;
#endif


doubleComplex		zacoss(doubleComplex z) {
  /* FIXME: Dummy... */
  return (DoubleComplex(0,1));
}
