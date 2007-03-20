/*
**  -*- C -*-
**
** sign.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Tue Mar 20 14:58:52 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __SIGN_H__
#define __SIGN_H__

#include <math.h>

/**
 ** \brief Float Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	ssigns(float in);

/**
 ** \brief Double Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int	dsigns(double in);

#endif /* !__SIGN_H__ */
