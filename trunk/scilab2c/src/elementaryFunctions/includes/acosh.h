/*
**  -*- C -*-
**
** acosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Wed Sep  5 15:31:02 2007 bruno
**
** Copyright INRIA 2007
*/

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
void		sacosha(float* in, float* out, int size);

/*
** \brief Double Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dacosha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cacosha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Hyperbolic ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zacosha(doubleComplex* in, doubleComplex* out, int size);


