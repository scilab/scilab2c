/*
**  -*- C -*-
**
** exp10.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Thu Sep  6 17:08:51 2007 bruno
**
** Copyright INRIA 2006
*/

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
void		sexp10a(float* in, float* out, int size);

/*
** \brief Double Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dexp10a(double* in, double* out, int size);

/*
** \brief Float Complex Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cexp10a(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix 10 based Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zexp10a(doubleComplex* in, doubleComplex* out, int size);


