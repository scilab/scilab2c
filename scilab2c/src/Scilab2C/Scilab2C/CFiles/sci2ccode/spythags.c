/*
**  -*- C -*-
**
** spythags.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 11:31:47 2007 jofret
** Last update Thu Aug 16 12:10:01 2007 bruno
**
** Copyright INRIA 2007
*/

#include "pythag.h"

float	spythags(float x, float y) {
  return (ssqrts( (x*x) + (y*y) ));
}
