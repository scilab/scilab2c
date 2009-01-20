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

#include "isempty.h"

double		zisemptya(doubleComplex* x, int size) {
  double* out;
  int indiceOut;

  out = malloc((uint)size*sizeof(double));

  zfinda(x, size, out, &indiceOut);

  if ( out[0] == -1 /*ie tab=NULL*/) {
    free(out);
    return 1;
  }
  
  free(out);
  return 0;
}
