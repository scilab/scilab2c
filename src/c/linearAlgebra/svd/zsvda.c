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
#include "svd.h"
#include "lapack.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "doubleComplex.h"
#include "matrixTranspose.h"
#include "conj.h"

extern doubleComplex zgesvd_( char* , char* , int* , int* ,doubleComplex *,\
                int* , double* ,doubleComplex* , int* ,doubleComplex* , int* ,\
                 doubleComplex* , int* , double* , int* );


int Min(int a,int b){
	if(a > b)
		return b;
	return a;
}

int Max(int a,int b){
	if(a > b)
		return a;
	else
		return b;
}

void zsvda(doubleComplex *in1,int row,int col,int in2,int nout, doubleComplex *out1,\
		doubleComplex *out2,doubleComplex *out3){
		
		/* Allocating memory and copying the input in buf*/
		doubleComplex *buf;
		buf = (doubleComplex *)malloc(row*col*sizeof(doubleComplex));
		memcpy(buf,in1,row*col*sizeof(doubleComplex));

		/* Type of variable used */
		int i,j,k;
		char JOBU,JOBVT;
		int M = row;
		int N = col;
		int LDA,LDU,LDVT,LWORK,INFO;

		/*double precision array to store Sigma*/
		double *S;
		S = (double *)malloc(Min(M,N)*sizeof(double));

		/* amount of memory needed for work */
		LWORK = Max(1,2*Min(M,N)+Max(M,N));
		doubleComplex *WORK = malloc(Max(1,2*LWORK)*sizeof(doubleComplex));

		double *RWORK;
		RWORK = (double *)malloc(5*Min(M,N)*sizeof(double));

		INFO = 0;

		if(nout == 1){
			JOBU = 'N';	
			JOBVT = 'N';		 
			LDA = M;
			LDU = M;
			LDVT = N;
			//doubleComplex *U,*VT;	
			//U = malloc(sizeof(doubleComplex));
			//VT = malloc(sizeof(doubleComplex));
		 	zgesvd_(&JOBU,&JOBVT,&M,&N,buf,&LDA,S,NULL,&LDU,NULL,&LDVT,WORK,&LWORK,RWORK,&INFO);
			
			//memcpy(out2,S,Min(M,N)*sizeof(double));
			for(i=0;i<Min(M,N);i++){
				out2[i] = DoubleComplex(S[i],0);				
				//out2[i] = S[i];
				//out2[i] = 0;		
			}
			out1 = NULL;
			out3 = NULL;
			//for(i=0;i<Min(M,N);i++) printf("%lf ",S[i]);
			//free(S);	
		}
		else if(nout == 3){
			if(in2 == 0 || M == N){			
				JOBU = 'A';		
				JOBVT = 'A';	
				LDA = M;
				LDU = M;
				LDVT = N;
				doubleComplex *U = malloc(LDU*M*sizeof(doubleComplex));
				doubleComplex *VT = malloc(LDVT*N*sizeof(doubleComplex));

				/*doubleComplex wopt;
				LWORK = -1;
				zgesvd_(&JOBU,&JOBVT,&M,&N,buf,&LDA,S,U,&LDU,VT,&LDVT,&wopt,&LWORK,RWORK,&INFO);*/

				//LWORK = (int)zreals(wopt);
				
				WORK = (doubleComplex *)malloc(LWORK*sizeof(doubleComplex));
				zgesvd_(&JOBU,&JOBVT,&M,&N,buf,&LDA,S,U,&LDU,VT,&LDVT,WORK,&LWORK,RWORK,&INFO);

				memcpy(out1,U,LDU*Min(M,N)*sizeof(doubleComplex));
				//memcpy(out3,VT,N*N*sizeof(doubleComplex));
				for(i=0;i<N;i++){
					for(j=i;j<N;j++){
						out3[i+j*N] = zconjs(VT[j+i*N]);
						out3[j+i*N] = zconjs(VT[i+j*N]);				
					}
				}			
				//ztransposea(VT,LDVT,Min(M,N),out3);
				/*for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						printf("[ %lf %lf]",zreals(VT[i*N+j]),zimags(VT[i*N+j]));
					}				
					printf("\n");	
				}*/
				//free(U);
				//free(VT);
			}
			else{
				LDA = M;
				LDU = M;
				if(M > N){
					JOBU = 'S';					
					JOBVT = 'A';
					LDVT = N;				
				}
				else{
					JOBU = 'A';
					JOBVT = 'S';
					LDVT = Min(M,N);	
				}
				doubleComplex *U;
				U = malloc(LDU*Min(M,N)*sizeof(doubleComplex));
				doubleComplex *VT;
				VT = malloc(LDVT*N*sizeof(doubleComplex));
				zgesvd_(&JOBU,&JOBVT,&M,&N,buf,&LDA,S,U,&LDU,VT,&LDVT,WORK,&LWORK,RWORK,&INFO);
				memcpy(out1,U,M*Min(M,N)*sizeof(doubleComplex));
				//ztransposea(VT,LDVT,Min(row,col),out3);
				
				/* These lines are added to patch an error of ZGESVD */
				/*
					ij = i+(j-1)*N
              		ji = j+(i-1)*N
               		zstk(lV+ij-1) = conjg(zstk(lVT+ji-1))
               		zstk(lV+ji-1) = conjg(zstk(lVT+ij-1))								
				*/
				for(i=0;i<Min(M,N);i++){
					for(j=0;j<N;j++){
						out3[j+i*N] = zconjs(VT[i+j*Min(M,N)]);				
					}
				}								
				//free(U);
				//free(VT);
			}
			/* output from zgesvd is copied to out2 variables in required format*/
			for(j=0;j<Min(M,N);j++){
				for(k=0;k<Min(M,N);k++){
					if(j == k)
						out2[j*(Min(M,N))+k] = DoubleComplex(S[j],0);
					else 
						out2[j*(Min(M,N))+k] = DoubleComplex(0,0);					
				}
			}
		}
}
