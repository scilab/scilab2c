/*
**  -*- C -*-
**
** atan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Wed Sep  5 16:05:57 2007 bruno
**
** Copyright INRIA 2006
*/

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
void		satana(float* in, float* out, int size);

/*
** \brief Double Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		datana(double* in, double* out, int size);

/*
** \brief Float Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		catana(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zatana(doubleComplex* in, doubleComplex* out, int size);


