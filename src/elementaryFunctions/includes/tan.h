/*
**  -*- C -*-
**
** tan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Mar 19 11:56:44 2007 jofret
**
** Copyright INRIA 2006
*/

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
void		stana(float* in, float* out, int size);

/*
** \brief Double Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		dtana(double* in, double* out, int size);

/*
** \brief Float Complex Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		ctana(floatComplex* in, floatComplex* out, int size);

/*
** \brief Double Complex Matrix Tangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		ztana(doubleComplex* in, doubleComplex* out, int size);


