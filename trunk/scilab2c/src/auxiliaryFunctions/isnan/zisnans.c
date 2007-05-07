/*
**  -*- C -*-
**
** zisnans.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Apr 26 16:02:19 2007 jofret
** Last update Thu Apr 26 17:36:44 2007 jofret
**
** Copyright INRIA 2007
*/

#include "isnan.h"

bool	zisnans(doubleComplex in) {
  return (isnan(zreals(in)) || isnan(zimags(in)));
}
