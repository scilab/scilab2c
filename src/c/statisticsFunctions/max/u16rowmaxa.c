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
#include "statMax.h"

void u16rowmaxa(uint16 *in, int rows, int columns, uint16* out) {
  int i = 0, j = 0;
  //out = malloc(columns*sizeof(uint16));
  for (i = 0; i < columns; i++) 
      {
	  out[i]=(uint16)in[i];
	  for (j = 1 ; j < rows ; j++)
              {
     		 if (in[j*columns+i]>out[i]) 
                    out[i] = (uint16)in[j*columns+i];
              }
      }
  
}
