/*
**  -*- C -*-
**
** exp.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:29:44 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __EXP_H__
#define __EXP_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Exponential for different types .
*/

/*
** \brief Float Exponential function
** \param in : input value.
*/
float		sexps(float in);

/*
** \brief Double Exponential function
** \param in : input value.
*/
double		dexps(double in);

/*
** \brief Float Complex Exponential function
** \param in : input value.
*/
floatComplex	cexps(floatComplex in);

/*
** \brief Double Complex Exponential function
** \param in : input value.
*/
doubleComplex	zexps(doubleComplex in);

/*
** \brief Float Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sexpa(float* in, int size, float* out);

/*
** \brief Double Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dexpa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cexpa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zexpa(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__EXP_H__ */

