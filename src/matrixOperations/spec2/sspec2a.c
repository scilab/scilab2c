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
 

#include "spec.h"



void sspec2a(float* in, int rows, floatComplex* eigenvalues,floatComplex* eigenvectors){
	/* As we use Lapack to find the eigenvalues, we must cast the float input into double
	and the doubleComplex outputs of dspec2a into floatComplex*/
	
	int i;
	double* dblin;
	doubleComplex *dbleigenvalues,*dbleigenvectors;
	
	dblin=malloc((uint)(rows*rows)*sizeof(double));
	dbleigenvalues=malloc((uint)(rows*rows)*sizeof(doubleComplex));	
	dbleigenvectors=malloc((uint)(rows*rows)*sizeof(doubleComplex));
	
	for (i=0;i<rows*rows;i++) dblin[i]=(double)in[i];
	
	dspec2a(dblin,rows,dbleigenvalues,dbleigenvectors);
	
	for (i=0;i<rows*rows;i++) eigenvalues[i]=FloatComplex((float)zreals(dbleigenvalues[i]),(float)zimags(dbleigenvalues[i]));
	for (i=0;i<rows*rows;i++) eigenvectors[i]=FloatComplex((float)zreals(dbleigenvectors[i]),(float)zimags(dbleigenvectors[i]));
}
