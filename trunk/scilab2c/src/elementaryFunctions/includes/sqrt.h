/*
**  -*- C -*-
**
** sqrt.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Mar 22 08:54:39 2007 jofret
** Last update Thu Mar 22 08:55:15 2007 jofret
**
** Copyright INRIA 2007
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Square Root for different types .
*/

/*
** \brief Float Square Root function
** \param in : input value.
*/
float		ssqrts(float in);

/*
** \brief Double Square Root function
** \param in : input value.
*/
double		dsqrts(double in);

/*
** \brief Float Complex Square Root function
** \param in : input value.
*/
floatComplex	csqrts(floatComplex in);

/*
** \brief Double Complex Square Root function
** \param in : input value.
*/
doubleComplex	zsqrts(doubleComplex in);

/*
** \brief Float Matrix Square Root function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ssqrta(float* in, float* out, int size);

/*
** \brief Double Matrix Square Root function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dsqrta(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Square Root function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		csqrta(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Square Root function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zsqrta(doubleComplex* in, doubleComplex* out, int size);


