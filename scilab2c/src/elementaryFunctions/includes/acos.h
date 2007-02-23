/*
**  -*- C -*-
**
** acos.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Fri Feb 23 16:38:45 2007 jofret
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
*/
float		sacoss(float);

/*
** \brief Double ArcCosine function
*/
double		dacoss(double);

/*
** \brief Float Complex ArcCosine function
*/
floatComplex	cacoss(floatComplex);

/*
** \brief Double Complex ArcCosine function
*/
doubleComplex	zacoss(doubleComplex);

/*
** \brief Float Matrix ArcCosine function
*/
void		sacosa(float*, int, float*, int, int);

/*
** \brief Double Matrix ArcCosine function
*/
void		dacosa(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix ArcCosine function
*/
void		cacosa(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix ArcCosine function
*/
void		zacosa(doubleComplex*, int, doubleComplex*, int, int);


