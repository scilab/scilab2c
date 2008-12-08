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



#include "chol.h"
#include <malloc.h>
#include <stdio.h>

void dchola(double * in, int size, double *U){
	/* param in : input matrix (square matrix)
	   param size : number of rows or columns
	   param U : output upper triangular matrix
	*/
	double* tmp;
	int i;
	tmp=malloc((unsigned int)(size*size)*sizeof(double));
	for (i=0;i<size*size;i++) tmp[i]=in[i];
	printf("copy\n");
	C2F(dpotrf)('U',size,in,size,0);
	printf("lapack\n");
	for (i=0;i<size*size;i++) U[i]=in[i];
	printf("copy2\n");
	
}
