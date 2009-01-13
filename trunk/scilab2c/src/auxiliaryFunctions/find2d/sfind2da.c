/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "find2d.h"
#include <malloc.h>
#include <stdio.h>

void sfind2da(float* x, int rows, int columns, float** out1, float** out2) {
  int i = 0, j=0;
  int indiceOut = 0;
  float* out_1 = NULL, *out_2=NULL;

  /* We suppose out1 and out2 are NULL on input */
  
  for (i = 0; i < rows ; ++i) {
  	for	(j = 0; j < columns ; ++j) {
	    if (x[i*columns+j] != 0) {
	    	out_1 = realloc(out_1, (uint)(indiceOut+1)*sizeof(float));
	    	out_2 = realloc(out_2, (uint)(indiceOut+1)*sizeof(float));
	    	
		out_1[indiceOut] = (float)i;
		out_2[indiceOut] = (float)j;
		indiceOut++;
	    }
	}
  }
  *out1=out_1;
  *out2=out_2;
}
