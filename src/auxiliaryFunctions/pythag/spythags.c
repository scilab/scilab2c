/*
**  -*- C -*-
**
** spythags.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 11:31:47 2007 jofret
** Last update Mon Apr 23 11:54:06 2007 jofret
**
** Copyright INRIA 2007
*/

#include "pythag.h"
#include "sqrt.h"

float	spythags(float x, float y) {
  return (ssqrts( (x*x) + (y*y) ));
}
