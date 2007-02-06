/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Mon Feb  5 17:11:51 2007 jofret
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

float		creal(floatComplex);
float		cimag(floatComplex);
floatComplex	FloatComplex(float, float);
bool		isreal(floatComplex);
bool		isimag(floatComplex);
/*
** }
*/

#endif /* !__FLOATCOMPLEX_H__ */
