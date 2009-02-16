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

#include "matrixPow.h"
#include "logm.h"
#include "matrixExponential.h"
#include "multiplication.h"

void cpowma(floatComplex* in, int rows, floatComplex expand, floatComplex* out){
	int i=0;
	/* use the formula a^b=exp(b*ln(a)) */
	clogma(in,rows,out);
	for(i=0;i<rows*rows;i++) out[i]= cmuls(expand,out[i]);
	cexpma(out,out,(int)rows);
					
}
