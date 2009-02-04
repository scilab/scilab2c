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

#include "rand.h"
#include <stdio.h>
void zranda(doubleComplex *out, int size) {
  int i = 0;
  double *Real_randa, *Imag_randa;
  Real_randa = malloc((uint)size*sizeof(double));
  Imag_randa = malloc((uint)size*sizeof(double));
   
  for (i = 0 ; i < size ; ++i) {
    Real_randa[i]=drands();
  }

  for (i = 0 ; i < size ; ++i) {  
    Imag_randa[i]=drands();
  }

  for (i = 0 ; i < size ; ++i) {  
    out[i]=DoubleComplex(Real_randa[i],Imag_randa[i]);
  }	

}
