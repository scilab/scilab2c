/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
#include "cat.h"

void i8rowcats(int8 in1,int8 in2,int8 *out)
{
  out[0] = in1;
  out[1] = in2;

}

void i8columncats(int8 in1,uint8 in2,int8 *out)
{
  out[0] = in1;
  out[1] = in2;

}
