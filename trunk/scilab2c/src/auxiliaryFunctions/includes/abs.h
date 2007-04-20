/*
**  -*- C -*-
**
** abs.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:12:17 2007 jofret
** Last update Fri Apr 20 15:53:57 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __ABS_H__
#define __ABS_H__

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

#endif /* !__ABS_H__ */
