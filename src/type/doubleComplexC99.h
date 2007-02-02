/*
**  -*- C -*-
**
** doubleComplexC99.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  1 17:01:39 2007 jofret
** Last update Fri Feb  2 10:49:40 2007 jofret
**
** Copyright INRIA 2007
*/


#ifndef __DOUBLECOMPLEXC99_H__
#define __DOUBLECOMPLEXC99_H__

/*
** Use standard C99 Double Complex definition
** {
*/
#include <stdbool.h>
#include <complex.h>

typedef double complex doubleComplex;

doubleComplex	DoubleComplex(double, double);
bool		isreal(doubleComplex);
bool		isimag(doubleComplex);
/*
** }
*/

#endif /* !__DOUBLE_COMPLEX_C99__ */
