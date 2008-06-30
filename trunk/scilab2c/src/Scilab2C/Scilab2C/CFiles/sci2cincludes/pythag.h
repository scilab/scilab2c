/*
**  -*- C -*-
**
** pythag.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Thu Aug 16 12:18:00 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __PYTHAG_H__
#define __PYTHAG_H__

#include "sqrt.h"

/*
** \brief Float Pythag function
*/
float		spythags(float x, float y);

/*
** \brief Double Pythag function
*/
double		dpythags(double x, double y);

/*
** \brief Float Complex Pythag function
*/
floatComplex	cpythags(floatComplex x, floatComplex y);

/*
** \brief Double Complex Pythag function
*/
/*NUTRICATO: BRUNO, NOT IMPLEMENTED YET!!!!!!*/
doubleComplex	zpythags(doubleComplex x, doubleComplex y);

#endif /* !__PYTHAG_H__ */
