/*
**  -*- C -*-
**
** isEmpty.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Apr 27 08:57:49 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __IS_EMPTY_H__
#define __IS_EMPTY_H__

#include <stdbool.h>

#include "floatComplex.h"
#include "doubleComplex.h"
#include "notFound.h"
#include "find.h"

/*
** \brief Float Is Empty function
*/
bool	sisemptya(float* x, int size);

/*
** \brief Double Is Empty function
*/
bool	disemptya(double*x, int size);

/*
** \brief Float Complex Is Empty function
*/
bool	cisemptya(floatComplex* z, int size);

/*
** \brief Double Complex Is Empty function
*/
bool	zisemptya(doubleComplex* z, int size);
#endif /* !__IS_EMPTY_H__ */
