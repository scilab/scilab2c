/*
**  -*- C -*-
**
** cisnans.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Apr 26 15:56:35 2007 jofret
** Last update Mon May  7 15:44:29 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isnan.h"

bool	cisnans(floatComplex in) {
  return (isnan(creals(in)) || isnan(cimags(in)));
}
