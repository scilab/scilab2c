/*
**  -*- C -*-
**
** cosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Mar 19 12:08:32 2007 jofret
**
** Copyright INRIA 2006
*/

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
void		scosha(float* in, float* out, int size);

/*
** \brief Double Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dcosha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ccosha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zcosha(doubleComplex* in, doubleComplex* out, int size);


