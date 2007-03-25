/*
**  -*- C -*-
**
** ctans.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 12:04:28 2006 jofret
** Last update Sun Mar 25 12:23:06 2007 bruno
**
** Copyright INRIA 2006
*/

#include "tan.h"
/*
 #include "log.h"
*/
#include "sqrt.h"
/*
 #include "lapack.h"
*/

floatComplex		ctans(floatComplex z) {

  double out_real = 0;
  double out_imag = 0;
  /*
    double L = 1 + dlogs(2 / dsqrts(dlamch('e', 1)));
  */

  return FloatComplex(out_real, out_imag);
}
