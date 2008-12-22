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
 

#include "hilbert.h"
#include "fft.h"
#include "ifft.h"
#include "multiplication.h"
#include <stdio.h>

void dhilberta (double* in, int rows, int cols, doubleComplex *out){
	int i=0,j=0;
	

	for (i=0;i<rows*cols;i++) out[i]=DoubleComplex(in[i],0);
printf("0.passe\n");

	zfftma(out, rows, cols, out);
printf("1.passe\n");

	for (i=0;i<rows;i++){
		for (j=0;j<cols;j++){
			if ((j>0)&&(j<(cols/2))) out[j] = zmuls(out[j],DoubleComplex(2,0));
			if (j>(cols/2)) out[j] = zmuls(out[j],DoubleComplex(0,0));
		}	
	}
printf("2.passe\n");
	zifftma(out, rows, cols,out);
}


