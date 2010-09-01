/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <stdlib.h>
#include "fftshift.h"

void zfftshifta(doubleComplex* in,int rows,int columns,doubleComplex* out){
	doubleComplex* temp;

	/*FIXME : malloc here*/
	temp=(doubleComplex *) malloc((unsigned int)(rows*columns)*sizeof(doubleComplex));

	zrowfftshifta(in,rows,columns,temp);
	zcolumnfftshifta(temp,rows,columns,out);
}


