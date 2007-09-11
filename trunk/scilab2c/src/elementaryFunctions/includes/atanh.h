/*
**  -*- C -*-
**
** atanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Wed Sep  5 16:22:20 2007 bruno
**
** Copyright INRIA 2006
*/

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
void		satanha(float* in, float* out, int size);

/*
** \brief Double Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		datanha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		catanha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Hyperbolic ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zatanha(doubleComplex* in, doubleComplex* out, int size);


