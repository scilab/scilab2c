/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Fri Feb 23 16:19:10 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __FLOATCOMPLEX_H__
#define __FLOATCOMPLEX_H__

/*
** Hand made Float Complex definition
** {
*/
#include <stdbool.h>

struct  float_complex
{
  float real;
  float imag;
};

typedef struct float_complex floatComplex;

float		creals(floatComplex);
float		cimags(floatComplex);
floatComplex	FloatComplex(float, float);
bool		cisreals(floatComplex);
bool		cisimags(floatComplex);
/*
** }
*/

#endif /* !__FLOATCOMPLEX_H__ */
