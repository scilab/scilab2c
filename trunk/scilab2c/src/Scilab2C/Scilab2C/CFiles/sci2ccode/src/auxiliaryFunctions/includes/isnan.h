/*
**  -*- C -*-
**
** isnan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Thu Apr 26 17:10:23 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __IS_NAN_H__
#define __IS_NAN_H__

#include <stdbool.h>
#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief Float Is Nan function
*/
bool	sisnans(float x);

/*
** \brief Double Is Nan function
*/
bool	disnans(double x);

/*
** \brief Float Complex Is Nan function
*/
bool	cisnans(floatComplex z);

/*
** \brief Double Complex Is Nan function
*/
bool	zisnans(doubleComplex z);
#endif /* !__IS_NAN_H__ */
