/*
**  -*- C -*-
**
** acosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Mon Oct 22 09:40:42 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __ACOSH_H__
#define __ACOSH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic Hyperbolic ArcCosine for different types .
*/

/*
** \brief Float Hyperbolic ArcCosine function
** \param in : input array value.
*/
float		sacoshs(float in);

/*
** \brief Double Hyperbolic ArcCosine function
** \param in : input array value.
*/
double		dacoshs(double in);

/*
** \brief Float Complex Hyperbolic ArcCosine function
** \param in : input array value.
*/
floatComplex	cacoshs(floatComplex in);

/*
** \brief Double Complex Hyperbolic ArcCosine function
** \param in : input array value.
*/
doubleComplex	zacoshs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sacosha(float* in, int size, float* out);

/*
** \brief Double Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dacosha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cacosha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zacosha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ACOSH_H__ */
