/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Fri Dec  1 15:17:05 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

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

#endif /* !__DOUBLECOMPLEX_H__ */
