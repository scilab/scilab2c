/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "find.h"

void sfinda(float* x, int size, float* out, int *indiceOut) {
  int i = 0;
  *indiceOut=0;
  
  /* Initialisation de out à -1 */
  for (i=0;i<size;i++) out[i]=-1;

  for (i = 0; i < size ; ++i) {
  	  
    if (x[i] != 0) {
	out[*indiceOut] = (float)(i+1);
	(*indiceOut)++;
    }
  }
  //*indiceOut must be equal to 1 when goes out to display as we want */
  *indiceOut=1;
}


