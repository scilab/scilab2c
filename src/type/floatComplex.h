/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Thu Dec  7 11:44:08 2006 jofret
**
** Copyright INRIA 2006
*/

#ifndef __FLOATCOMPLEX_H__
#define __FLOATCOMPLEX_H__

#include <stdbool.h>

struct  float_complex
{
  float real;
  float imag;
};

typedef struct float_complex floatComplex;

float		real(floatComplex);
float		imag(floatComplex);
floatComplex	FloatComplex(float, float);
bool		isreal(floatComplex);
bool		isimag(floatComplex);

#endif /* !__FLOATCOMPLEX_H__ */
