/*
**  -*- C -*-
**
** acos.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Mon Oct 22 09:42:52 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __ACOS_H__
#define __ACOS_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute ArcCosine for different types .
*/

/*
** \brief Float ArcCosine function
** \param in : input array value.
*/
float		sacoss(float in);

/*
** \brief Double ArcCosine function
** \param in : input array value.
*/
double		dacoss(double in);

/*
** \brief Float Complex ArcCosine function
** \param in : input array value.
*/
floatComplex	cacoss(floatComplex in);

/*
** \brief Double Complex ArcCosine function
** \param in : input array value.
*/
doubleComplex	zacoss(doubleComplex in);

/*
** \brief Float Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sacosa(float* in, int size, float* out);

/*
** \brief Double Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dacosa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cacosa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zacosa(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ACOS_H__ */
