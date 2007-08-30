/*
**  -*- C -*-
**
** dpythags.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 11:54:15 2007 jofret
** Last update Thu Aug 16 12:10:17 2007 bruno
**
** Copyright INRIA 2007
*/

#include "pythag.h"

double	dpythags(double x, double y) {
  return (dsqrts( (x*x) + (y*y) ) );
}

