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


#include "sum.h"

uint8 u8suma(uint8 *in, int size) {
   //floatComplex accumulate = FloatComplex(0.0f, 0.0f);
   int i = 0;
   uint8 accumulate = 0;

  for (i = 0; i < size; ++i)
    {
      accumulate = u8adds(accumulate, in[i]);
    }
  return accumulate;
}
