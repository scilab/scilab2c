/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Tue Feb 27 09:58:29 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __FLOATCOMPLEX_H__
#define __FLOATCOMPLEX_H__

#include <stdbool.h>

#ifndef STDC99
/*
** Hand made Float Complex definition
** {
*/
struct  float_complex
{
  float real;
  float imag;
};

typedef struct float_complex floatComplex;
/*
** }
*/
#else
/*
** C99 Standard
** {
*/
#include <complex.h>

typedef float complex floatComplex;
/*
** }
*/
#endif


float		creals(floatComplex);
float		cimags(floatComplex);
floatComplex	FloatComplex(float, float);
bool		cisreals(floatComplex);
bool		cisimags(floatComplex);

#endif /* !__FLOATCOMPLEX_H__ */
