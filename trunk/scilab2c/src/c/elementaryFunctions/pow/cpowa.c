/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "pow.h"

void cpowa(floatComplex* x, int size, floatComplex* power, floatComplex *out) {
	/* 
	Computes Scilab x.^power
	Computes power element by element 
	x and power must have same size 
	*/
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = cpows(x[i], power[i]);
  }
}
