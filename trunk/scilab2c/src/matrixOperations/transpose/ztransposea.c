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

#include "matrixTranspose.h"

void ztransposea ( doubleComplex* in , int lines , int columns, doubleComplex* out ){
	
	int i    = 0 ;
	int j    = 0 ;
	
	for(i = 0 ; i <  lines ; i++)
	{
		for(j = 0 ; j <  columns ; j++)

		out[j+i*columns]	= in[i+j*lines];
	}
	
}
