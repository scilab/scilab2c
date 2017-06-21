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
#include "sva.h"
#include "svd.h"
#include "lapack.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "matrixTranspose.h"

#define eps 2.22044604925e-16

void dsvaa(int ninp,double *in1,int row,int col,double in2,double *out1, \
	double *out2,double *out3){

	double tol;
	double rk=0;
	int N=col,M=row;
	if(row == 0 && col == 0) return;
	int i,j;
	int arow;		/*Actual row of given matrix*/
	int acol;		/*Actual col of given matrix*/

	/* Calculation of svd of a given matrix */
	double *U,*S,*V;
	U = (double *)malloc((double)row*Min(row,col)*sizeof(double));
	S = (double *)malloc((double)Min(row,col)*Min(row,col)*sizeof(double));
	V = (double *)malloc((double)col*Min(row,col)*sizeof(double));
		
	dsvda(in1,M,N,1,3,U,S,V);

	if (ninp == 1){ 		/* [u,s,v] = sva(A) when input is only matrix */
		tol = Max(row,col)*S[0]*eps;
		rk = 0;		
		for(i=0;i<col;i++){
			if(S[i+i*row] > tol){
				rk+=1;			
			}		
		}
	}
	else{				/*[u,s,v] = sva(A,tol) when two input's are there */
		tol = in2;
		if(tol > 1){
			rk = tol;
			if(rk > Min(row,col)){
				printf("ERROR:  Wrong value for input argument !");	
				out1 = NULL;
				out2 = NULL;
				out3 = NULL;
				return;	
			}		
		}
		else{
			rk = 0;
			for(i=0;i<col;i++){
				if(S[i+i*row] > tol){
					rk+=1;
				}
			}	
		}	
	}
	arow = M;
	acol = Min(M,N);	
	for(i=0;i<arow;i++){
		for(j=0;j<rk;j++){
			out1[i+j*row]=U[i+j*arow];		
		}	
	}
	arow = Min(M,N);
	for(i=0;i<rk;i++){
		for(j=0;j<rk;j++){
			out2[i+j*(int)rk] = S[i+j*arow];	
		}			
	}
	arow = N;
	acol = Min(M,N);
	for(i=0;i<arow;i++){
		for(j=0;j<rk;j++){
			out3[i+j*arow] = V[i+j*arow];		
		}
	}	
}
