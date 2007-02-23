/*
**  -*- C -*-
**
** tanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Feb 23 17:32:55 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic Tangeant for different types .
*/

/*
** \brief Float Hyperbolic Tangeant function
*/
float		stanhs(float);

/*
** \brief Double Hyperbolic Tangeant function
*/
double		dtanhs(double);

/*
** \brief Float Complex Hyperbolic Tangeant function
*/
floatComplex	ctanhs(floatComplex);

/*
** \brief Double Complex Hyperbolic Tangeant function
*/
doubleComplex	ztanhs(doubleComplex);

/*
** \brief Float Matrix Hyperbolic Tangeant function
*/
void		stanha(float*, int, float*, int, int);

/*
** \brief Double Matrix Hyperbolic Tangeant function
*/
void		dtanha(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Hyperbolic Tangeant function
*/
void		ctanha(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Hyperbolic Tangeant function
*/
void		ztanha(doubleComplex*, int, doubleComplex*, int, int);


