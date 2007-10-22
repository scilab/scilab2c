/*
**  -*- C -*-
**
** atanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:35:16 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __ATANH_H__
#define __ATANH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic ArcTangeant for different types .
*/

/*
** \brief Float Hyperbolic ArcTangeant function
** \param in : input value.
*/
float		satanhs(float in);

/*
** \brief Double Hyperbolic ArcTangeant function
** \param in : input value.
*/
double		datanhs(double in);

/*
** \brief Float Complex Hyperbolic ArcTangeant function
** \param in : input value.
*/
floatComplex	catanhs(floatComplex in);

/*
** \brief Double Complex Hyperbolic ArcTangeant function
** \param in : input value.
*/
doubleComplex	zatanhs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		satanha(float* in, int size, float* out);

/*
** \brief Double Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		datanha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		catanha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zatanha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ATANH_H__ */

