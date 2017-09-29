// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Ashish Kamble
// Email: toolbox@scilab.in

#include "acoth.h"
#include "doubleComplex.h"

void zacotha(doubleComplex* x, int size, doubleComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zacoths(x[i]);
  }
}
