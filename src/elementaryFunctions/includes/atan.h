/*
**  -*- C -*-
**
** atan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:36:09 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __ATAN_H__
#define __ATAN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute ArcTangeant for different types .
*/

/*
** \brief Float ArcTangeant function
** \param in : input value.
*/
float		satans(float in);

/*
** \brief Double ArcTangeant function
** \param in : input value.
*/
double		datans(double in);

/*
** \brief Float Complex ArcTangeant function
** \param in : input value.
*/
floatComplex	catans(floatComplex in);

/*
** \brief Double Complex ArcTangeant function
** \param in : input value.
*/
doubleComplex	zatans(doubleComplex in);

/*
** \brief Float Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		satana(float* in, int size, float* out);

/*
** \brief Double Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		datana(double* in, int size, double* out);

/*
** \brief Float Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		catana(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zatana(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ATAN_H__ */
