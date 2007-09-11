/*
**  -*- C -*-
**
** log.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Mar 22 08:52:36 2007 jofret
** Last update Wed Sep  5 17:58:52 2007 bruno
**
** Copyright INRIA 2007
*/

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
void		slog10a(float* in, float* out, int size);

/*
** \brief Double Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dlog10a(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		clog10a(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zlog10a(doubleComplex* in, doubleComplex* out, int size);


