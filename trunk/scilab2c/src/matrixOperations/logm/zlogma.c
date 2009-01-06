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

#include <stdio.h>
#include <malloc.h>
#include "lapack.h"
#include "pow.h"
#include "logm.h"
#include "log.h"
#include "matrixMultiplication.h"
#include "matrixTranspose.h"
#include "matrixInversion.h"
#include "logm_internal.h"

void zlogma (doubleComplex* in, int size, doubleComplex* out){
	doubleComplex *out1, *out2, *tmp, *inCopy;
	int i=0, j=0, egaux=0;
	int mon_select, sdim, lwork, bwork, info = 0;
	doubleComplex *eigenvalues, *work, *rwork;
	
	
	
	inCopy=malloc((uint)(size*size)*sizeof(doubleComplex));
	out1=malloc((uint)(size*size)*sizeof(doubleComplex));
	out2=malloc((uint)(size*size)*sizeof(doubleComplex));
	tmp=malloc((uint)(size*size)*sizeof(doubleComplex));
	eigenvalues=malloc((uint)size*sizeof(doubleComplex));
	work=malloc((uint)(dpows(2,size))*sizeof(doubleComplex));
	rwork=malloc((uint)size*sizeof(doubleComplex));
	
	for (i=0;i<size*size;i++) inCopy[i]=in[i];
	ztransposea(in,size,size,tmp);
	
	/* Check if in and transpose(in) are equals */
	for (i=0;i<size*size;i++){
		if  (  (zreals(in[i])!=zreals(tmp[i])) || (zimags(in[i])!=zimags(tmp[i])) ) break;
	}
	if (i==size*size) egaux =1;
	
	for (i=0;i<size*size;i++) out1[i]=in[i];
	
	if (egaux){
	/*Hermitian matrix*/
		
		
		C2F(zgees)("V","S", &mon_select, &size, out1, &size, &sdim, eigenvalues,  out2, &size, work, &lwork, rwork, &bwork, &info);
	
		for (i=0;i<size;i++){
			for (j=0;j<size;j++){
				tmp[i*size+j]=DoubleComplex(0,0);
				if (i==j)  tmp[i*size+j]=zlogs(out2[i*size+j]);
			}
		}
	
		zmulma(out1,size,size,tmp,size,size,out2);
		ztransposea(out1,size,size,tmp);
			
	}
	else
	{
	/*General Matrix*/
		/* A faire 
			wbdiag (appel à bdiag dans le script mais le bdiag de scilab
			appelle sci_bdiag qui lui appelle wbdiag car input complexe)
		*/
		wbdiag(out1,size,out2);
		
		for (i=0;i<size;i++){
			for (j=0;j<size;j++){
				tmp[i*size+j]=DoubleComplex(0,0);
				if (i==j)  tmp[i*size+j]=zlogs(out2[i*size+j]);
			}
		}
	
		zmulma(out1,size,size,tmp,size,size,out2);
		zinverma(out1,tmp,size);
		
	}
	
	zmulma(out2,size,size,tmp,size,size,out);	
}
