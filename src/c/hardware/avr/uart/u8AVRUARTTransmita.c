/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ashish Kamble
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/ 
//Function to Transmit Char.


#include "AVRPeripheralUART.h"


uint8 u8AVRUARTTransmita(uint8* x, int size) 
{
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
   u8AVRUARTTransmits(x[i]);
  }
 return 0;
}
