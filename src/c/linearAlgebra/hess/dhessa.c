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

/*This function finds the hessenberg form of a matrix A.*/

#include "hess.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"

/* Lapack subroutines - which are used*/
extern int dgehrd_(int *, int *,int *,double *,int *,double *,double *,int *,int *);
extern int dorghr_(int *, int *,int *,double *,int *,double *,double *,int *,int *);

/* All the vairbale names are given exactly the same name as scilab source code */
void dhessa(double *in1,int size,int nout,double *out1, double *out2){
/* Variables names are done through, Lapack library. */
	int i,j,k;	
	int N = size;
	int ILO=1;
	int IHI=N;
	double *A;
	int LDA=N;
	double *TAU;
	double *WORK;
	int LWORK = N;
	int INFO;
	A = (double *)malloc((double)size*size*sizeof(double));
	memcpy(A,in1,size*size*sizeof(double));
	TAU = (double *)malloc((double)size*sizeof(double));
	WORK = (double *)malloc((double)LWORK*sizeof(double));
	dgehrd_(&N,&ILO,&IHI,A,&LDA,TAU,WORK,&N,&INFO);
		
	for(i=0;i<N;i++)		/* copying it in output */
		for(j=0;j<N;j++)
			out2[i+j*N] = A[i+j*N];
	
	for(j=1;j<=N-2;j++){	/* copying it in output */
		for(i=j+2;i<=N;i++){
			out2[(i-1)+(j-1)*N] = 0;
		}
	}
	
	if(nout > 1){
		dorghr_(&N,&ILO,&IHI,A,&LDA,TAU,WORK,&LWORK,&INFO);
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)
				out1[i+j*N] = A[i+j*N];
	}
	
	/*for(i=0;i<N;i++){
		 for(j=0;j<N;j++){
			if(i == j) out1[i+j*N]=1;			
			else out1[i+j*N]=0;		
		} 
	}
	double result[size*size];
	for(i=IHI-2;i>=ILO-1;i--){
		tau = TAU[i];
		double V[size],v[size],v1[size*size];		
		for(j=0;j<i;j++) V[j]=0;
		V[j]=1*tau;
		for(j=i+1;j<IHI;j++) V[j] = tau*A[j+i*N];	
		dtransposea (V,N,1,v);
		dmulma(V,N,1,v,1,N,v1);		
		for(j=0;j<N;j++) for(k=0;k<N;k++) if(j == k) v1[j+k*N]--;
		for(j=0;j<N;j++) for(k=0;k<N;k++) result[j+k*N] = out1[j+k*N];
		dmulma(v1,N,N,result,N,N,out1);
	}*/	
	//out2 = NULL;
}
