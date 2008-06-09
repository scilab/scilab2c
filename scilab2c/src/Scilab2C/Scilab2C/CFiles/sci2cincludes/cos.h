/*
**  -*- C -*-
**
** cos.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 10:01:54 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __COS_H__
#define __COS_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "cos.h"
#include "sin.h"
#include "cosh.h"
#include "sinh.h"


/*
** Compute Cosine for different types .
*/

float		scoss(float in);
double	dcoss(double in);
floatComplex	ccoss(floatComplex in);
doubleComplex	zcoss(doubleComplex in);

void		scosa(float* in, int size, float* out);
void		dcosa(double* in, int size, double* out);
void		ccosa(floatComplex* in, int size, floatComplex* out);
void		zcosa(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__COS_H__ */
