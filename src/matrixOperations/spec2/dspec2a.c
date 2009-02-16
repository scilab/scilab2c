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
#include "lapack.h"
#include "zeros.h"
#include "max.h"
#include "stdio.h"


void dspec2a(double* in, int rows,doubleComplex* eigenvalues,doubleComplex* eigenvectors){
	int i=0, j=0, ij=0, ij1=0;
	int symmetric=0;
	int INFO=0;
	int iWorkSize = 0;
	double* pdblWork;
	double* outReal;
	double* outImag;
	double* pdblLeftvectors;
	double* pdblRightvectors;
	double* inCopy;
	
	inCopy = malloc((uint)(rows*rows) * sizeof(double));
	outReal = malloc((uint)rows * sizeof(double));
	outImag = malloc((uint)rows * sizeof(double));
	pdblLeftvectors=NULL;
	pdblRightvectors=NULL;
	
	
	iWorkSize = 4*rows;
	pdblWork = malloc((uint)iWorkSize * sizeof(double));
	
	for(i=0;i<rows*rows;i++)	inCopy[i]=in[i];
	
	
	
	/* look if the matrix is symmetric */
	for (i=0;i<rows;i++){	
		for (j=0;j<rows;j++) 	
			if (in[i*rows+j]!=in[i+j*rows]) break;
		if (j!=rows) break;
		
	}
	
	/* the matrix is symmetric if the 2 loops goes to end i.e
		i==rows and j==rows */
	if ((i==rows)&&(j==rows)) symmetric=1;
	
	/* apply lapack function according to symmetry */
	if(symmetric){	
		C2F(dsyev)( "V", "U", &rows, inCopy, &rows, outReal, pdblWork, &iWorkSize, &INFO );
		for (i=0;i<rows*rows;i++) eigenvectors[i]=DoubleComplex(inCopy[i],0);
		dzerosa(outImag,1,rows);
	}
	else {	
		pdblRightvectors=malloc((uint)(rows*rows) * sizeof(double));
		C2F(dgeev)( "N", "V", &rows, inCopy, &rows, outReal, outImag,
        			pdblLeftvectors, &rows, pdblRightvectors, &rows, pdblWork, &iWorkSize, &INFO );  
        	      	
        	for(j = 0 ; j < rows ; j+=2){
			for(i = 0 ; i < rows ; i++)
			{
				ij = i + j * rows;
				ij1 = i + (j + 1) * rows;
				eigenvectors[ij] = DoubleComplex(pdblRightvectors[ij],pdblRightvectors[ij1]);
				eigenvectors[ij1] = DoubleComplex(pdblRightvectors[ij],-pdblRightvectors[ij1]);
			}
		}
		
	}
	
	
	zzerosa(eigenvalues,1,rows*rows);
	for (i=0;i<rows;i++) eigenvalues[i+i*rows]=DoubleComplex(outReal[i],outImag[i]);


	free(inCopy);
	free(outReal);
	free(outImag);
	free(pdblWork);
	free(pdblLeftvectors);
	free(pdblRightvectors);
}

