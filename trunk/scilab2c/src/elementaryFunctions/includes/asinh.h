/*
**  -*- C -*-
**
** asinh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Wed Sep  5 15:32:26 2007 bruno
**
** Copyright INRIA 2007
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic ArcSine for different types .
*/

/*
** \brief Float Hyperbolic ArcSine function
** \param in : input value.
*/
float		sasinhs(float in);

/*
** \brief Double Hyperbolic ArcSine function
** \param in : input value.
*/
double		dasinhs(double in);

/*
** \brief Float Complex Hyperbolic ArcSine function
** \param in : input value.
*/
floatComplex	casinhs(floatComplex in);

/*
** \brief Double Complex Hyperbolic ArcSine function
** \param in : input value.
*/
doubleComplex	zasinhs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sasinha(float* in, float* out, int size);

/*
** \brief Double Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dasinha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		casinha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zasinha(doubleComplex* in, doubleComplex* out, int size);


