/*
**  -*- C -*-
**
** zcoss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Thu Dec  7 16:43:16 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef STDC99
#include "doubleComplex.h"
#else
#include <complex.h>
typedef double complex doubleComplex;
#endif


doubleComplex		zcoss(doubleComplex z) {
  /* FIXME: Dummy... */
  return (DoubleComplex(0,1));
}
