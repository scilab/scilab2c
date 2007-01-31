/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Wed Jan 31 10:14:20 2007 jofret
**
** Copyright INRIA 2006
*/

#ifndef __FLOATCOMPLEX_H__
#define __FLOATCOMPLEX_H__

#ifndef STDC99
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

float		real(floatComplex);
float		imag(floatComplex);
floatComplex	FloatComplex(float, float);
bool		isreal(floatComplex);
bool		isimag(floatComplex);
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

#endif /* !__FLOATCOMPLEX_H__ */
