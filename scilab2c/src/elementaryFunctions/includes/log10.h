/*
**  -*- C -*-
**
** log.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Mar 22 08:52:36 2007 jofret
** Last update Mon Oct 22 09:29:03 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __LOG10_H__
#define __LOG10_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Ten based Logarithm for different types .
*/

/*
** \brief Float Ten based Logarithm function
** \param in : input value.
*/
float		slog10s(float in);

/*
** \brief Double Ten based Logarithm function
** \param in : input value.
*/
double		dlog10s(double in);

/*
** \brief Float Complex Ten based Logarithm function
** \param in : input value.
*/
floatComplex	clog10s(floatComplex in);

/*
** \brief Double Complex Ten based Logarithm function
** \param in : input value.
*/
doubleComplex	zlog10s(doubleComplex in);

/*
** \brief Float Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		slog10a(float* in, int size, float* out);

/*
** \brief Double Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dlog10a(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		clog10a(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zlog10a(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__LOG10_H__ */

