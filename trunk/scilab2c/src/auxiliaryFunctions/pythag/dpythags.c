/*
**  -*- C -*-
**
** dpythags.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 11:54:15 2007 jofret
** Last update Mon Apr 23 15:43:21 2007 jofret
**
** Copyright INRIA 2007
*/

#include "pythag.h"
#include "sqrt.h"

double	dpythags(double x, double y) {
  return (dsqrts( (x*x) + (y*y) ) );
}

