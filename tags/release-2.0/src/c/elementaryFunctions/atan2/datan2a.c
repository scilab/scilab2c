/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "atan2.h" 


void	datan2a(double *in1, int size1,
	        double *in2, int size2,
	        double * out)
{
  int i = 0;

  for(i = 0 ; i < size1 && i < size2 ; ++i)
    {
      out[i] = datan2s( in1[i] , in2[i]) ;
    }
}