/*
**  -*- C -*-
**
** rand.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Sep  7 16:12:18 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __RAND_H__
#define __RAND_H__

#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/**
 ** \brief Float Rand function
 ** \return A random float.
 **/
float		srands(void);

/**
 ** \brief Double Rand function
 ** \return A random double.
 **/
double		drands(void);

/**
 ** \brief Float Complex Rand function
 ** \return A random float complex.
 **/
floatComplex	crands(void);

/**
 ** \brief Double Complex Rand function
 ** \return A random double complex.
 **/
doubleComplex	zrands(void);

/**
 ** \brief Float Array Rand function
 ** \return A random float array.
 **/
void		sranda(float *out, int size);

/**
 ** \brief Double Array Rand function
 ** \return A random double array.
 **/
void		dranda(double *out, int size);

/**
 ** \brief Float Complex Array Rand function
 ** \return A random float complex array.
 **/
void		cranda(floatComplex *out, int size);

/**
 ** \brief Double Complex Array Rand function
 ** \return A random double complex array.
 **/
void		zranda(doubleComplex *out, int size);



#endif /* !__RAND_H__ */
