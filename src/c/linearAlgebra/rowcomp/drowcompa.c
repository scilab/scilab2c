/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/* This function is used to find row compression, range */

#include "rowcomp.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "svd.h"
#include "norm.h"
#include "eye.h"
#include "matrixTranspose.h"
#include "qr.h"

/* All variable names, are in consideration of scilab documentation. for reference please check the scilab code.*/

double drowcompa(int ninp,double *A,int row,int col,char *flag,double tol,double *w){
	double rk;
	double *U;
	double *S;
	double *V;
	double *q,*r,*e;	
	if(row == 0 || col == 0){
		w = NULL;		
		return 0;	
	}
	
	double nA1 = dnorma(A,row,col,1);
	if(nA1 < sqrt(pow(2,-52))/10){
		deyea(w,row,col);
		return 0;	
	}	
	if(ninp == 1){
		flag = "svd";
		tol = sqrt(pow(2,-52))*nA1;	
	}
	else if(ninp == 2){
		tol = sqrt(pow(2,-52))*nA1;	
	}
	else{
		if(tol < 0){ /* if tolerance is negative */
			printf(" Wrong values for input argument #: Non-negative scalar expected");		
		}		
	}
	int M = row,N=col;
	int minMN = min(M,N);
	char check[3]="qr";
	//printf(" %s ",flag);
	if(strcmp(check,flag) == 0){
		/* calling qr function*/
		//printf(" * ");		
		q = (double *)malloc(M*min(M,N)*sizeof(double));
		r = (double *)malloc(minMN*N*sizeof(double));
		e = (double *)malloc(N*N*sizeof(double));		
		rk = dqra(2,4,A,M,N,tol,q,r,e);
		memcpy(w,q,row*col*sizeof(double));		
		dtransposea(q,row,row,w);	
		return rk;					
	}
	else{
		/* svd function type */
		U = (double *)malloc(row*row*sizeof(double));
		S = (double *)malloc(row*col*sizeof(double));
		V = (double *)malloc(col*col*sizeof(double));
		rk = dsvda(tol,A,row,col,0,4,U,S,V);
		dtransposea(U,row,row,w);		
		return rk;	
	}
}
