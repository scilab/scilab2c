/*
**  -*- C -*-
**
** sin.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 10:01:54 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __SIN_H__
#define __SIN_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"

/*
** Compute Cosine for different types .
*/

float		ssins(float in);
double	dsins(double in);
floatComplex	csins(floatComplex z);
doubleComplex	zsins(doubleComplex in);

void		ssina(float* in, int size, float* out);
void		dsina(double* in, int size, double* out);
void		csina(floatComplex* in, int size, floatComplex* out);
void		zsina(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__SIN_H__ */
