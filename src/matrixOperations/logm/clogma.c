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


#include <malloc.h>
#include "logm.h"
#include "schur.h"
#include "log.h"
#include "multiplication.h"
#include "tranpose.h"
#include "inverse.h"

static void bdiag(floatComplex *in, int size, double n, floatComplex *out1, floatComplex *out2){
	
}



void clogma (floatComplex* in, int size, floatComplex* out){
	doubleComplex *out1, *out2, *dtmp;
	int i=0, egaux=0;
	float eps = 2.220e-16;
	int select, sdim, lwork, bwork, info = 0;
	doubleComplex *eigenvalues, *work, *rwork;
	
	
	out1=malloc((uint)(size*size)*sizeof(doubleComplex));
	out2=malloc((uint)(size*size)*sizeof(doubleComplex));
	dtmp=malloc((uint)(size*size)*sizeof(doubleComplex));
	eigenvalues=malloc((uint)size*sizeof(doubleComplex));
	work=malloc((uint)(pow(2,size))*sizeof(doubleComplex));
	rwork=malloc((uint)size*sizeof(doubleComplex));
	
	ctransposea(in,size,size,tmp);/*pb entre float et double*/
	
	for (i=0;i<size*size;i++){
		if (in[i]!=tmp[i]) break;
	}
	if (i==size*size) egaux =1;
	
	
	if (egaux){
	/*Hermitian matrix*/
		for (i=0;i<size*size,i++) 	
			out1[i]=DoubleComplex((double)creals(in[i]),(double)cimags(in[i]));;
		
		C2F(zgees)("V","S", &select, &size, out1, &size, &sdim, eigenvalues,  out2, &size, work, &lwork, rwork, &bwork, &info);
	
		for (i=0;i<size;i++){
			for (j=0;j<size;j++){
				tmp[i*size+j]=0;
				if (i==j)  dtmp[i*size+j]=zlogs(out2[i*size+j]);
			}
		}
	
		zmulma(out1,size,size,dtmp,size,size,out2);
		ztransposea(out1,size,size,dtmp);
	
		cmula(out2,size,size,tmp,size,size,out1);
		for (i=0;i<size*size,i++) 	
			out[i]=FloatComplex((float)zreals(in[i]),(float)zimags(in[i]));;			
	}
	else
	{
	/*General Matrix*/
		bdiag(in, size, eps, out1, out2);
	
	
		for (i=0;i<size;i++){
			for (j=0;j<size;j++){
				tmp[i*size+j]=0;
				if (i==j)  tmp[i*size+j]=clogs(out2[i*size+j]);
			}
		}
	
		out2 = cmulma(out1,tmp);
		tmp = cinversea(out1,size,size,out1);
	
		out= cmula(out2,tmp);			
	}
	
	
}
