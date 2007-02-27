/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Tue Feb 27 10:02:08 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

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

#endif /* !__DOUBLECOMPLEX_H__ */
