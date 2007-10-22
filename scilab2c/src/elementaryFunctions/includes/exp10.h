/*
**  -*- C -*-
**
** exp10.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:32:28 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __EXP10_H__
#define __EXP10_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute 10 based Exponential for different types .
*/

/*
** \brief Float 10 based Exponential function
** \param in : input value.
*/
float		sexp10s(float in);

/*
** \brief Double Exp10onential function
** \param in : input value.
*/
double		dexp10s(double in);

/*
** \brief Float Complex 10 based Exponential function
** \param in : input value.
*/
floatComplex	cexp10s(floatComplex in);

/*
** \brief Double Complex 10 based Exponential function
** \param in : input value.
*/
doubleComplex	zexp10s(doubleComplex in);

/*
** \brief Float Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sexp10a(float* in, int size, float* out);

/*
** \brief Double Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dexp10a(double* in, int size, double* out);

/*
** \brief Float Complex Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cexp10a(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zexp10a(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__EXP10_H__ */

