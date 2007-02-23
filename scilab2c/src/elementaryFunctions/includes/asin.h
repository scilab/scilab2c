/*
**  -*- C -*-
**
** asin.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:20:35 2007 jofret
** Last update Fri Feb 23 16:41:38 2007 jofret
**
** Copyright INRIA 2007
*/

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute ArcSine for different types .
*/

/*
** \brief Float ArcSine function
*/
float		sasins(float);

/*
** \brief Double ArcSine function
*/
double		dasins(double);

/*
** \brief Float Complex ArcSine function
*/
floatComplex	casins(floatComplex);

/*
** \brief Double Complex ArcSine function
*/
doubleComplex	zasins(doubleComplex);

/*
** \brief Float Matrix ArcSine function
*/
void		sasina(float*, int, float*, int, int);

/*
** \brief Double Matrix ArcSine function
*/
void		dasina(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix ArcSine function
*/
void		casina(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix ArcSine function
*/
void		zasina(doubleComplex*, int, doubleComplex*, int, int);


