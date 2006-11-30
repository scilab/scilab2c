/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Thu Nov 30 17:53:13 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

struct  double_complex
{
  double real;
  double imag;
};

typedef struct double_complex doubleComplex;

double		real(doubleComplex);
double		imag(doubleComplex);
doubleComplex	DoubleComplex(double, double);

#endif /* !__DOUBLECOMPLEX_H__ */
