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

/* This C code is used to generate function for QR decomposition */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "qr.h"
#include "lapack.h"
#include "string.h"
#include "matrixTranspose.h"

/*For reference check Scilab source code & lapack library websites 
Names of variable are almost same for convience.
*/
/*
int min(int M,int N){
	if(M > N) return N;
	return M;	
}

int max(int M,int N){
	if(M > N) return N;
	return N;
}*/

/* External Function used of lapack library */
extern double dgeqrf_(int *,int *,double *,int *,double *,double *,int *,int *);
extern double dlacpy_(char *,int *,int *,double *,int *,double *,int *);
extern double dgeqpf_(int *,int *,double *,int *,int *,double *,double *,int *);
extern double dorgqr_(int *,int *,int *,double *,int *,double *,double *,int *,int *);
extern void dlaset_(char *,int *,int *,double *,double *,double *,int *);

/* function for finding qr */
double dqra(int ninp,int nout,double *inp1,int M,int N,double tol,double *out1,double *out2,double *out3){
	int i,j;
	char choice;
	double alpha=0.0,beta=0.0;
	int minMN = min(M,N);

	double *A;
	A = (double *)malloc(M*N*sizeof(double));
	memcpy(A,inp1,M*N*sizeof(double));	
	
	if(M <= 0 || N <= 0){
		out1 = NULL;
		out2 = NULL;
		return 0;
	}
	/* doldqr */
	if(nout == 4){ /* [Q,R,rk,E]=qr(X [,tol]) */
		if(ninp == 1){
			tol = -1;
		}
		
		int INFO,rk;			
		
		int *JPVT;	
		JPVT = ( int *)malloc(N*sizeof(int));
		
		double *TAU;
		TAU = (double *)malloc(minMN*sizeof(double));
		
		int LWORK = 3*N;
		
		double *WORK;
		WORK = (double *)malloc(LWORK*sizeof(double));
		
		for(i=1;i<=M;i++){
			JPVT[i-1]=0.0;		
		}
		dgeqpf_(&M,&N,A,&M,JPVT,TAU,WORK,&INFO);
			
		choice = 'U';			
		dlacpy_(&choice,&M,&N,A,&M,out2,&M);
		
		if(M > N){
			for(j=1;j<=N;j++){
				for(i=j+1;i<=M;i++){
					out2[i-1+(j-1)*M] = 0.0;			
				}			
			}			
		}
		else{
			for(j=1;j<=M-1;j++){
				for(i=j+1;i<=M;i++){
					out2[i-1+(j-1)*M] = 0.0;
				}		
			}			
		}
		
		if(M > N){
			choice = 'F';
			dlacpy_(&choice,&M,&N,A,&M,out1,&M);
			for(j=N+1;j<=M;j++){
				for(i=1;i<=M;i++){
					out1[i-1+(j-1)*M] = 0.0;
				}						
			}						
		}
		else{	
			choice = 'F';
			dlacpy_(&choice,&M,&M,A,&M,out1,&M);						
		}
		
		dorgqr_(&M,&M,&minMN,out1,&M,TAU,WORK,&LWORK,&INFO);
			
		choice = 'F';
		dlaset_(&choice,&N,&N,&alpha,&beta,out3,&N);
		
		for(j=1;j<=N;j++){
			i = JPVT[j-1];
			out3[i-1+(j-1)*N] = 1.0;				
		}
		
		double tt = abs(out2[0]);
		
		if(tol == -1){
			tol = (double)max(M,N)*pow(2,-52)*tt;	
		}
		double ch;	
		//printf("%lf ",tol);
		for(j=1;j<=minMN;j++){		
			//printf("%e ",out2[(j-1)+(j-1)*M]);
			if(out2[(j-1)+(j-1)*M] < 0){
				ch = -out2[(j-1)+(j-1)*M];		
			}
			else{
				ch = out2[(j-1)+(j-1)*M];		
			}			
			if(ch > tol){
				rk = j;
			}
			else{
				break;			
			}				
		}
		//printf("\n");		
		return rk;
	}
	else if(ninp == 1){
		/*	(intdgeqpf3)
			[Q,R]=qr(A)
		    [Q,R,E]=qr(A)
		*/
		int LDA = M;
	
		double *TAU;
		TAU = (double *)malloc(min(M,N)*sizeof(double));

		int LWORK;
		if(nout <= 2)
			LWORK = N;
		else
			LWORK = 3*N;
	
		double *WORK;
		WORK = (double *)malloc((LWORK+1)*sizeof(double));

		int INFO;
	
		int *JPVT;
		JPVT = (int *)malloc(N*sizeof(int));
	
		if(nout <= 2){
			dgeqrf_(&M,&N,A,&M,TAU,WORK,&LWORK,&INFO);
		}
		else{
			for(i=0;i<N;i++){
				*(JPVT+i)=0.0;
			}
			dgeqpf_(&M,&N,A,&M,JPVT,TAU,WORK,&INFO);			
		}
		
		/* Copying code from A to R */
		choice = 'U';
		dlacpy_(&choice,&M,&N,A,&M,out2,&M);
		/*for(i=0;i<M;i++){
			for(j=0;j<N-i;j++){
				out2[i+j*M] = A[i+j*M];
			}			
		}*/
	
		if(M > N){
			for(j=1;j<=N;j++){
				for(i=j+1;i<=M;i++){
					out2[i-1+(j-1)*M] = 0.0;
				}	
			}	
		}
		else{
			for(j=1;j<=M-1;j++){
				for(i=j+1;i<=M;i++){
					out2[i-1+(j-1)*M] = 0.0;
				}		
			}	
		}
		/* lQ - out1 */
		if(M > N){
			choice = 'F';
			dlacpy_(&choice,&M,&N,A,&M,out1,&M);
			/*for(i=0;i<M*N;i++){
				out1[i]=A[i];
			}*/
			for(j=N+1;j<=M;j++){
				for(i=1;i<=M;i++){
					out1[i+(j-1)*M] = 0.0;
				}					
			}			
		}
		else{
			choice = 'F';
			dlacpy_(&choice,&M,&M,A,&M,out1,&M);
			/*for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					out1		
				}	
			}*/	
		}
		dorgqr_(&M,&M,&minMN,out1,&M,TAU,WORK,&LWORK,&INFO);
	
		if(nout > 2){
			choice = 'F';
			dlaset_(&choice,&N,&N,&alpha,&beta,out3,&N);
			for(j=1;j<=N;j++){
				i = *(JPVT+j-1);
				//printf("%d ",i-1+(j-1)*N);
				*(out3+i-1+(j-1)*N) = 1.0;
			}
			//printf("\n");		
		}
	}
	else{/* 
		[[Q,R]=qr(A,'e')
		[Q,R,E]=qr(A,'e') ]	*/
		int *JPVT;
		JPVT = (int *)malloc(N*sizeof(int));
		
		double *TAU;
		TAU = (double *)malloc(min(M,N)*sizeof(double));
		int LWORK;
		if(nout <= 2){
			LWORK = N;		
		}
		else{
			LWORK = 3*N;		
		}
		
		double *WORK;
		WORK = (double *)malloc(LWORK*sizeof(double));
				
		int INFO;
		if(nout <= 2)
			dgeqrf_(&M,&N,A,&M,TAU,WORK,&LWORK,&INFO);
		else{
			for(i=1;i<=N;i++){
				JPVT[i-1]=0.0;			
			}
			dgeqpf_(&M,&N,A,&M,JPVT,TAU,WORK,&INFO);				
		}
		choice = 'U';
		
		dlacpy_(&choice,&minMN,&N,A,&M,out2,&minMN);
		
		if(N >= 2){
			for(j=1;j<=N-1;j++){
				if(j+1 <= minMN){
					for(i=j+1;i<=minMN;i++){
						out2[i-1+(j-1)*minMN] = 0.0;
					}				
				}				
			}				
		}
		choice = 'F';
		dlacpy_(&choice,&M,&minMN,A,&M,out1,&M);
		dorgqr_(&M,&minMN,&minMN,out1,&M,TAU,WORK,&LWORK,&INFO);
	
		if(nout > 2){
			choice = 'F';			
			dlaset_(&choice,&N,&N,&alpha,&beta,out3,&N);
			for(j=1;j<=N;j++){
				i = JPVT[j-1];
				out3[i-1+(j-1)*N] = 1.0;			
			}			
		}
	}
	return 0;
}
