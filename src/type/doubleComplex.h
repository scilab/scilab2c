/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Wed Jan 31 10:14:18 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

#ifndef STDC99
/*
** Hand made Double Complex definition
** {
*/
#include <stdbool.h>

struct  double_complex
{
  double real;
  double imag;
};

typedef struct double_complex doubleComplex;

double		real(doubleComplex);
double		imag(doubleComplex);
doubleComplex	DoubleComplex(double, double);
bool		isreal(doubleComplex);
bool		isimag(doubleComplex);
/*
** }
*/

#else

/*
** Use standard C99 Double Complex definition
** {
*/
#include <complex.h>

typedef double complex doubleComplex;
/*
** }
*/

#endif /* !STDC99 */

#endif /* !__DOUBLECOMPLEX_H__ */
