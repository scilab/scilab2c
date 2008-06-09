/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Thu Aug 16 11:57:12 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif

#include <stdbool.h>

#ifndef STDC99
/*
** Hand made Double Complex definition
** {
*/
struct  double_complex
{
  double real;
  double imag;
};

typedef struct double_complex doubleComplex;
/*
** }
*/
#else
/*
** Standard C99 Complex
** {
*/
#include <complex.h>

typedef double complex doubleComplex;
/*
** }
*/
#endif

double		zreals(doubleComplex);
double		zimags(doubleComplex);
doubleComplex	DoubleComplex(double, double);
bool		zisreals(doubleComplex);
bool		zisimags(doubleComplex);

doubleComplex	zadds(doubleComplex, doubleComplex);
doubleComplex	zdiffs(doubleComplex, doubleComplex);
doubleComplex	ztimess(doubleComplex, doubleComplex);
doubleComplex	zdevides(doubleComplex, doubleComplex);
#endif /* !__DOUBLECOMPLEX_H__ */
