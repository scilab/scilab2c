/*
**  -*- C -*-
**
** tanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 08:55:49 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __TANH_H__
#define __TANH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic Tangeant for different types .
*/

/*
** \brief Float Hyperbolic Tangeant function
** \param in : input value.
*/
float		stanhs(float in);

/*
** \brief Double Hyperbolic Tangeant function
** \param in : input value.
*/
double		dtanhs(double in);

/*
** \brief Float Complex Hyperbolic Tangeant function
** \param in : input value.
*/
floatComplex	ctanhs(floatComplex in);

/*
** \brief Double Complex Hyperbolic Tangeant function
** \param in : input value.
*/
doubleComplex	ztanhs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		stanha(float* in, int size, float* out);

/*
** \brief Double Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dtanha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ctanha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ztanha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__TANH_H__ */
