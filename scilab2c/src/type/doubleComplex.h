/*
**  -*- C -*-
**
** doubleComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Fri Feb 23 16:19:20 2007 jofret
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

double		zreals(doubleComplex);
double		zimags(doubleComplex);
doubleComplex	DoubleComplex(double, double);
bool		zisreals(doubleComplex);
bool		zisimags(doubleComplex);
/*
** }
*/

#endif /* !__DOUBLECOMPLEX_H__ */
