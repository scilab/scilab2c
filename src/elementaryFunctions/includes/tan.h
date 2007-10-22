/*
**  -*- C -*-
**
** tan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 10:02:28 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __TAN_H__
#define __TAN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Tangeant for different types .
*/

/*
** \brief Float Tangeant function
** \param in : input value.
*/
float		stans(float in);

/*
** \brief Double Tangeant function
** \param in : input value.
*/
double		dtans(double in);

/*
** \brief Float Complex Tangeant function
** \param in : input value.
*/
floatComplex	ctans(floatComplex in);

/*
** \brief Double Complex Tangeant function
** \param in : input value.
*/
doubleComplex	ztans(doubleComplex in);

/*
** \brief Float Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		stana(float* in, int size, float* out);

/*
** \brief Double Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		dtana(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		ctana(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		ztana(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__TAN_H__ */

