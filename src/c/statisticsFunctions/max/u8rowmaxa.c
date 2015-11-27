/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
#include "statMax.h"
//#include "max.h"

void u8rowmaxa(uint8 *in, int rows, int columns, uint8* out) {
  int i = 0, j = 0;
 

  for (i = 0; i < columns; i++) 
     {
	  out[i]=(uint8)in[0];
	  for (j = 0 ; j < rows ; j++)
             {
     		 if (in[j]>out[i])
                   out[i] = (uint8)in[j];
             }
    }
}
