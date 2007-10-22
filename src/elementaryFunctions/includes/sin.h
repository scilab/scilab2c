/*
**  -*- C -*-
**
** sin.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:24:56 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __SIN_H__
#define __SIN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Sine for different types .
*/

/*
** \brief Float Sine function
** \param in : input value.
*/
float		ssins(float in);

/*
** \brief Double Sine function
** \param in : input value.
*/
double		dsins(double in);

/*
** \brief Float Complex Sine function
** \param in : input value.
*/
floatComplex	csins(floatComplex in);

/*
** \brief Double Complex Sine function
** \param in : input value.
*/
doubleComplex	zsins(doubleComplex in);

/*
** \brief Float Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ssina(float* in, int size, float* out);

/*
** \brief Double Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dsina(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		csina(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zsina(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__SIN_H__ */

