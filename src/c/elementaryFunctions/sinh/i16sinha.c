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

#include "sinh.h"

void i16sinha(int16* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = i16sinhs(x[i]);
  }
}
