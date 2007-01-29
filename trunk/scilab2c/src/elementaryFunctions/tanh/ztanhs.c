/*
**  -*- C -*-
**
** ztanhs.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:05:48 2006 jofret
** Last update Mon Jan 29 17:04:29 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef STDC99
#include "doubleComplex.h"
#else
#include <complex.h>
typedef double complex doubleComplex;
#endif


doubleComplex		ztanhs(doubleComplex z) {
  /* FIXME: Dummy... */
  return (DoubleComplex(0,1));
}
