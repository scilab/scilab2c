/*
**  -*- C -*-
**
** cosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Feb 23 16:47:51 2007 jofret
**
** Copyright INRIA 2006
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Cosine for different types .
*/

/*
** \brief Float Cosine function
*/
float		scoshs(float);

/*
** \brief Double Cosine function
*/
double		dcoshs(double);

/*
** \brief Float Complex Cosine function
*/
floatComplex	ccoshs(floatComplex);

/*
** \brief Double Complex Cosine function
*/
doubleComplex	zcoshs(doubleComplex);

/*
** \brief Float Matrix Cosine function
*/
void		scosha(float*, int, float*, int, int);

/*
** \brief Double Matrix Cosine function
*/
void		dcosha(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Cosine function
*/
void		ccosha(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Cosine function
*/
void		zcosha(doubleComplex*, int, doubleComplex*, int, int);


