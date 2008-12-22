
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


#include "matrixMagnitude.h"

float cmagna(floatComplex* in, int rows, int cols){
	int i,j;
	float  out=0, colSum;
	
	for(i=0;i<cols;i++){
		colSum = 0;
		for(j=0;j<rows;j++){
			colSum += cmagns(in[i*rows+j]);
		}
		if (colSum>out) out=colSum;
	}
	return out;
}


