/*
**  -*- C -*-
**
** spythags.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Mon Apr 23 11:31:47 2007 jofret
** Last update Thu Aug 16 12:17:21 2007 bruno
**
** Copyright INRIA 2007
*/

#include "complex.h"
#include "pythag.h"

floatComplex	cpythags(floatComplex x, floatComplex y) {
  return (csqrts( cadds(ctimess(x,x),
			ctimess(y,y)) ));
}
