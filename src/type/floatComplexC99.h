/*
**  -*- C -*-
**
** floatComplexC99.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Feb  5 17:09:35 2007 jofret
** Last update Mon Feb  5 17:10:50 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __FLOATCOMPLEXC99_H__
#define __FLOATCOMPLEXC99_H__

/*
** Use standard C99 float Complex definition
** {
*/
#include <stdbool.h>
#include <complex.h>

typedef float complex floatComplex;

floatComplex	FloatComplex(float, float);
bool		isreal(floatComplex);
bool		isimag(floatComplex);
/*
** }
*/

#endif /* !__DOUBLE_COMPLEX_C99__ */
