/*
**  -*- C -*-
**
** sign.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Sep  7 17:37:57 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __SIGN_H__
#define __SIGN_H__

#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/**
 ** \brief Float Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	ssigns(float in);

/**
 ** \brief Double Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	dsigns(double in);

/**
 ** \brief Float Complex Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	csigns(floatComplex in);

/**
 ** \brief Double Complex Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	zsigns(doubleComplex in);

/**
 ** \brief Float Signe Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the float array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
int	ssigna(float *in, int size);

/**
 ** \brief Double Signe Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the double array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
int	dsigna(double *in, int size);

/**
 ** \brief Float Signe Complex Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the float complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
int	csigna(floatComplex *in, int size);

/**
 ** \brief Double Signe Complex Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the double complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
int	zsigna(doubleComplex *in, int size);

#endif /* !__SIGN_H__ */
