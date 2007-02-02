/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Fri Feb  2 15:40:27 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

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

double		creal(doubleComplex);
double		cimag(doubleComplex);
doubleComplex	DoubleComplex(double, double);
bool		isreal(doubleComplex);
bool		isimag(doubleComplex);
/*
** }
*/

#endif /* !__DOUBLECOMPLEX_H__ */
