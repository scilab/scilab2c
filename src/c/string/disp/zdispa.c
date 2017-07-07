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

#include "disp.h"

double zdispa (doubleComplex* in, int rows, int columns){
	int i = 0,j = 0;
	
	for (i = 0; i < rows; ++i) {
<<<<<<< HEAD
		for (j=0;j<columns;j++) printf("  %1.20lf + %1.20lfi  " ,zreals(in[i+j*rows]) ,zimags(in[i+j*rows])); 
=======
		for (j=0;j<columns;j++) printf("  %1.20f + %1.20fi  " ,zreals(in[i+j*rows]) ,zimags(in[i+j*rows])); 
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
		printf("\n");
	}
	return 0;
}
