/*
**  -*- C -*-
**
** sinh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:24:13 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __SINH_H__
#define __SINH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Sine for different types .
*/

/*
** \brief Float Sine function
** \param in : input value.
*/
float		ssinhs(float in);

/*
** \brief Double Sine function
** \param in : input value.
*/
double		dsinhs(double in);

/*
** \brief Float Complex Sine function
** \param in : input value.
*/
floatComplex	csinhs(floatComplex in);

/*
** \brief Double Complex Sine function
** \param in : input value.
*/
doubleComplex	zsinhs(doubleComplex in);

/*
** \brief Float Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		ssinha(float* in, int size, float* out);

/*
** \brief Double Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		dsinha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		csinha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zsinha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__SINH_H__ */
