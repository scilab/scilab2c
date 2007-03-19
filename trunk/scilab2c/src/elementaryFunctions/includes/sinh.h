/*
**  -*- C -*-
**
** sinh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Mar 19 13:46:39 2007 jofret
**
** Copyright INRIA 2006
*/

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
void		ssinha(float* in, float* out, int size);

/*
** \brief Double Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		dsinha(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		csinha(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zsinha(doubleComplex* in, doubleComplex* out, int size);


