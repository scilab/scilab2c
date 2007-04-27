/*
**  -*- C -*-
**
** abs.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Wed Apr 25 11:26:42 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __ABS_H__
#define __ABS_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "sqrt.h"


/**
 ** \brief Float Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
float	sabss(float in);

/**
 ** \brief Double Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double we must determine abs.
 ** \return -in or +in depending on the abs of in.
 **/
double	dabss(double in);

/**
 ** \brief Float Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float complex we must determine abs i.e. module.
 ** \return |in|.
 **/
float	cabss(floatComplex in);

/**
 ** \brief Double Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex we must determine abs i.e. module.
 ** \return |in|.
 **/
double	zabss(doubleComplex in);

/**
 ** \brief Float Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float array we must determine abs.
 ** \param out : the float array result.
 **/
void	sabsa(float *in, float* out, int size);

/**
 ** \brief Double Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the double array we must determine abs.
 ** \param out : the double array result.
 **/
void	dabsa(double *in, double* out, int size);

/**
 ** \brief Float Complex Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float complex array we must determine abs i.e. module.
 ** \param out : the float complex array result i.e out[n] = |in[n]|.
 **/
void	cabsa(floatComplex *in, float* out, int size);

/**
 ** \brief Double Complex Array Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex array we must determine abs i.e. module.
 ** \param out : the double complex array result  i.e out[n] = |in[n]|.
 **/
void	zabsa(doubleComplex *in, double* out, int size);

#endif /* !__ABS_H__ */
