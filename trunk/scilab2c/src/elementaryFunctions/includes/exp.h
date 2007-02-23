/*
**  -*- C -*-
**
** exp.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Feb 23 17:06:25 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Exponential for different types .
*/

/*
** \brief Float Exponential function
*/
float		sexps(float);

/*
** \brief Double Exponential function
*/
double		dexps(double);

/*
** \brief Float Complex Exponential function
*/
floatComplex	cexps(floatComplex);

/*
** \brief Double Complex Exponential function
*/
doubleComplex	zexps(doubleComplex);

/*
** \brief Float Matrix Exponential function
*/
void		sexpa(float*, int, float*, int, int);

/*
** \brief Double Matrix Exponential function
*/
void		dexpa(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Exponential function
*/
void		cexpa(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Exponential function
*/
void		zexpa(doubleComplex*, int, doubleComplex*, int, int);


