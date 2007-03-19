/*
**  -*- C -*-
**
** acos.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Mon Mar 19 13:43:30 2007 jofret
**
** Copyright INRIA 2007
*/

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
void		sacosa(float* in, float* out, int size);

/*
** \brief Double Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dacosa(double* in, double* out, int size);

/*
** \brief Float Complex Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		cacosa(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix ArcCosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zacosa(doubleComplex* in, doubleComplex* out, int size);


