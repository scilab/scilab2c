/*
**  -*- C -*-
**
** asin.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Mon Oct 22 09:39:43 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __ASIN_H__
#define __ASIN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute ArcSine for different types .
*/

/*
** \brief Float ArcSine function
** \param in : input value.
*/
float		sasins(float in);

/*
** \brief Double ArcSine function
** \param in : input value.
*/
double		dasins(double in);

/*
** \brief Float Complex ArcSine function
** \param in : input value.
*/
floatComplex	casins(floatComplex in);

/*
** \brief Double Complex ArcSine function
** \param in : input value.
*/
doubleComplex	zasins(doubleComplex in);

/*
** \brief Float Matrix ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sasina(float* in, int size, float* out);

/*
** \brief Double Matrix ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dasina(double* in, int size, double* out);

/*
** \brief Float Complex Matrix ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		casina(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zasina(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ASIN_H__ */
