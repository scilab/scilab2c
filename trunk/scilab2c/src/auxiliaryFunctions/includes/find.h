/*
**  -*- C -*-
**
** find.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Feb 23 17:57:04 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __FIND_H__
#define __FIND_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "notFound.h"

/*
** \brief Float Find function
*/
int	sfinda(float* x, int size);

/*
** \brief Double Find function
*/
int	dfinda(double*x, int size);

/*
** \brief Float Complex Find function
*/
int	cfinda(floatComplex* z, int size);

/*
** \brief Double Complex Find function
*/
int	zfinda(doubleComplex* z, int size);
#endif /* !__FIND_H__ */
