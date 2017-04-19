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

#include "statMin.h"

void u16columnmina(uint16 *in, int rows, int columns, uint16* out) {
  int i = 0, j = 0;

  for (i = 0; i < rows; i++) {
	  out[i]=(uint16)in[i*columns];
	  for (j=0;j<columns;j++)
      		if (in[i+j*rows]<out[i]) 
                   out[i] = (uint16)in[i+j*rows];
    }

}
