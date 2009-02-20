/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008 - INRIA - Arnaud Torset
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "ifft.h"
#include "zeros.h"


void difftma ( double* in , int rows, int cols, double* out){
	double* ZEROS;
	doubleComplex* inCpx;
	doubleComplex* outCpx;

	ZEROS = malloc((uint)(rows*cols)*sizeof(double));	
	outCpx = malloc((uint)(rows*cols)*sizeof(doubleComplex));
	
	dzerosa(ZEROS,rows,cols);
	inCpx=DoubleComplexMatrix(in,ZEROS,rows*cols);
	
	zifftma(inCpx,rows,cols,outCpx);
	
	zreala(outCpx, rows*cols, out);
}
