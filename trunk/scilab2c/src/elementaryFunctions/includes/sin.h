/*
**  -*- C -*-
**
** sin.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Feb 23 17:13:32 2007 jofret
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
*/
float		ssins(float);

/*
** \brief Double Sine function
*/
double		dsins(double);

/*
** \brief Float Complex Sine function
*/
floatComplex	csins(floatComplex);

/*
** \brief Double Complex Sine function
*/
doubleComplex	zsins(doubleComplex);

/*
** \brief Float Matrix Sine function
*/
void		ssina(float*, int, float*, int, int);

/*
** \brief Double Matrix Sine function
*/
void		dsina(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Sine function
*/
void		csina(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Sine function
*/
void		zsina(doubleComplex*, int, doubleComplex*, int, int);


