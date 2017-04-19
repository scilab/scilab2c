/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "pow.h"

void u16powa(uint16* x, int size, uint16* power, uint16 *out) {
	/* 
	Computes Scilab x.^power
	Computes power element by element 
	x and power must have same size 
	*/
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = u16pows(x[i], power[i]);
  }
}
