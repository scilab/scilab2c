/*
**  -*- C -*-
**
** exp.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Mar 19 13:47:48 2007 jofret
**
** Copyright INRIA 2006
*/

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
void		sexpa(float* in, float* out, int size);

/*
** \brief Double Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dexpa(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cexpa(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zexpa(doubleComplex* in, doubleComplex* out, int size);


