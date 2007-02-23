/*
**  -*- C -*-
**
** find.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Feb 23 18:01:52 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __IS_EMPTY_H__
#define __IS_EMPTY_H__

#include <stdbool.h>

#include "floatComplex.h"
#include "doubleComplex.h"
#include "notFound.h"

/*
** \brief Float Is Empty function
*/
bool	sisEmptya(float* x, int size);

/*
** \brief Double Is Empty function
*/
bool	disEmptya(double*x, int size);

/*
** \brief Float Complex Is Empty function
*/
bool	cisEmptya(floatComplex* z, int size);

/*
** \brief Double Complex Is Empty function
*/
bool	zisEmptya(doubleComplex* z, int size);
#endif /* !__IS_EMPTY_H__ */
