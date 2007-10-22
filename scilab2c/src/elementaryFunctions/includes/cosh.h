/*
**  -*- C -*-
**
** cosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:33:12 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __COSH_H__
#define __COSH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Cosine for different types .
*/

/*
** \brief Float Cosine function
** \param in : input value.
*/
float		scoshs(float in);

/*
** \brief Double Cosine function
** \param in : input value.
*/
double		dcoshs(double in);

/*
** \brief Float Complex Cosine function
** \param in : input value.
*/
floatComplex	ccoshs(floatComplex in);

/*
** \brief Double Complex Cosine function
** \param in : input value.
*/
doubleComplex	zcoshs(doubleComplex in);

/*
** \brief Float Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		scosha(float* in, int size, float* out);

/*
** \brief Double Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dcosha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ccosha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zcosha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__COSH_H__ */

