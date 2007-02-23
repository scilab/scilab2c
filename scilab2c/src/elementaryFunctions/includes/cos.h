/*
**  -*- C -*-
**
** cos.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Feb 23 16:14:12 2007 jofret
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
float		scoss(float);

/*
** \brief Double Cosine function
*/
double		dcoss(double);

/*
** \brief Float Complex Cosine function
*/
floatComplex	ccoss(floatComplex);

/*
** \brief Double Complex Cosine function
*/
doubleComplex	zcoss(doubleComplex);

/*
** \brief Float Matrix Cosine function
*/
void		scosa(float*, int, float*, int, int);

/*
** \brief Double Matrix Cosine function
*/
void		dcosa(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Cosine function
*/
void		ccosa(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Cosine function
*/
void		zcosa(doubleComplex*, int, doubleComplex*, int, int);


