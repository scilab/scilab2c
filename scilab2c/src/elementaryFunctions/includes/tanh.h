/*
**  -*- C -*-
**
** tanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Mar 19 11:47:46 2007 jofret
**
** Copyright INRIA 2006
*/

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
void		stanha(float* in, float* out, int size);

/*
** \brief Double Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dtanha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ctanha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ztanha(doubleComplex* in, doubleComplex* out, int size);


