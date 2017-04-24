/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Siddhesh Wani
 Email: toolbox@scilab.in
*/
//Function to introduce specific delay in milliseconds

#include "AVRUtil.h"

uint8 u16AVRSleeps (uint16 delay)
{
  _delay_ms(delay);

 return 0;
}
