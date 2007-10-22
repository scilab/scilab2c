/*
**  -*- C -*-
**
** log.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Mar 22 08:52:36 2007 jofret
** Last update Mon Oct 22 09:27:17 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __LOG_H__
#define __LOG_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Logarithm for different types .
*/

/*
** \brief Float Logarithm function
** \param in : input value.
*/
float		slogs(float in);

/*
** \brief Double Logarithm function
** \param in : input value.
*/
double		dlogs(double in);

/*
** \brief Float Complex Logarithm function
** \param in : input value.
*/
floatComplex	clogs(floatComplex in);

/*
** \brief Double Complex Logarithm function
** \param in : input value.
*/
doubleComplex	zlogs(doubleComplex in);

/*
** \brief Float Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sloga(float* in, int size, float* out);

/*
** \brief Double Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dloga(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cloga(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zloga(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__LOG_H__ */

