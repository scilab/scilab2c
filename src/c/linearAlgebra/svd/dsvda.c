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

/*Funtion to find singular value decomposition of given matrix */

#include "lapack.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <math.h>
#include "svd.h"
#include "matrixTranspose.h"

int min(int a,int b);
int max(int a,int b);

extern double dgesvd_(char*,char*,int*,int*,double*,int*,double*,double*,int*,\
	double*,int*,double *,int*,int*);

/*  DGESVD computes the singular value decomposition (SVD) of a real
 M-by-N matrix A, optionally computing the left and/or right singular
 vectors. The SVD is written

      A = U * SIGMA * transpose(V) */

void dsvda(double *in1,int row,int col,double in2,double nout,double *out1, \
	double *out2,double *out3){

	char JOBU,JOBVT;
	int j,k;
	int LDU=1;			/*Leading Dimension of U */
	int LDVT=1;			/*Leading Dimension of VT */
	int M = row;
	int N = col;
	double *buf;
	double *S,*U,*VT;
	double *WORK;
	
	if((nout > 1 && in2 == 1) && (M != N)){	/* [U,S,VT] = svd(x,'e') */
		if(M > N){		
			JOBU = 'S';
			JOBVT = 'A';
			LDVT = N;
		}
		else{
			JOBU = 'A';
			JOBVT = 'S';		
			LDVT = min(M,N);	
		}
		LDU = M; 		
		U = (double*) malloc((double) (LDU)*min(M,N)*sizeof(double));
		VT = (double*) malloc((double) (LDVT)*N*sizeof(double));
	}
	else if(nout > 1){		/* [U,S,VT = svd(x)] */
		JOBU = 'A'; 		/*If JOBU = 'A', U contains the M-by-M orthogonal matrix U */
		JOBVT = 'A';		/*JOBVT = 'A':  all N rows of V**T are returned in the array VT;*/
		LDU = M;
		LDVT = N;
		U = (double*) malloc((double) M*M*sizeof(double));
		VT = (double*) malloc((double) N*N*sizeof(double));
	}	
	else{				/* ans = svd(x) */
		JOBU = 'N';	
		JOBVT = 'N';
	}
	int LDA = max(1,M);

	/* Making a copy of input matrix */
	buf = (double*) malloc((double)M*N*sizeof(double));
	memcpy(buf,in1,M*N*sizeof(double));
	
	S = (double*)malloc((double)min(col,row)*sizeof(double));

	int LWORK = 5*min(M,N);
	WORK = (double*)malloc((double)LWORK*sizeof(double));
	int INFO = 0;	/*For successful exit */

	dgesvd_(&JOBU,&JOBVT,&M,&N,buf,&LDA,S,U,&LDU,VT,&LDVT,WORK,&LWORK,&INFO);
	/*Subroutine DGESVD from Lapack lib. */

	if (nout  == 1){	/* ans = svd(x)*/
		memcpy(out1,S,min(row,col)*sizeof(double));
		//printf("%lf %lf %lf",*(S),*(S+1),*(S+2));
	}			/* [U,S,VT] = svd(x) */
	else if(in2 == 0 && nout > 1){
		memcpy(out1,U,LDU*M*sizeof(double));
		//memcpy(out3,VT,LDVT*min(row,col)*sizeof(double));
		for(j=0;j<M;j++){
			for(k=0;k<N;k++){
				if(j == k) *((out2+j*(min(M,N)))+k) = *(S+j);
				else *((out2+j*(min(M,N)))+k) = 0;					
			}
		}							
		dtransposea(VT,LDVT,N,out3);
	}
	else{
		memcpy(out1,U,LDU*min(row,col)*sizeof(double));
		for(j=0;j<min(M,N);j++){
			for(k=0;k<min(M,N);k++){
				if(j == k) *((out2+j*(min(M,N)))+k) = *(S+j);
				else *((out2+j*(min(M,N)))+k) = 0;					
			}
		}
		dtransposea(VT,LDVT,N,out3);
	}	   
}

int min(int a,int b){
	if(a > b) return b;
	return a;
}

int max(int a,int b){
	if(a > b) return a;
	return b;
}
