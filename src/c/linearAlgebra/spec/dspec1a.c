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

#include "spec.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include "doubleComplex.h"

extern int dggev_(char *,char *,int *,double *,int *,double *,int *,double *,double *,double *,double *,int *,double *,int *,double *,int *,int *);

void assembleEigenvectorsInPlace(int N,double *ALPHAI,double *EVreal,double *EVimg){
	int j,i;
	j=0;
	while(j<N){
		if(ALPHAI[j] == 0){
			//printf(" * ");
			j+=1;	
		}	
		else{	
			int ij;
			int ij1;
			for(i=0;i<N;i++){
				ij = i+j*N;
				ij1 = i+(j+1)*N;	
				EVimg[ij] = EVreal[ij1];
				EVimg[ij1] = -EVreal[ij1];	
				EVreal[ij1] = EVreal[ij];
			}
			j+=2;						
		}
	}
}

void dspec1a(double *in1,double *in2,int size,int nout,doubleComplex *out1,double *out2,doubleComplex *out3,doubleComplex *out4){
	
	int i,j;
	char JOBVL;
	char JOBVR;
	int N=size;
	
	double *A;
	int LDA=N;
	A = (double *)malloc(N*N*sizeof(double));	
	memcpy(A,in1,N*N*sizeof(double));
	
	double *B;
	int LDB=N;
	B = (double *)malloc(N*N*sizeof(double));
	memcpy(B,in2,N*N*sizeof(double));	
	
	double *ALPHAR;
	ALPHAR = (double *)malloc(N*sizeof(double));
	
	double *ALPHAI;
	ALPHAI = (double *)malloc(N*sizeof(double));
		
	double *BETA;
	BETA = (double *)malloc(N*sizeof(double));
	
	double *VL;
	VL = (double *)malloc(N*N*sizeof(double));
	
	int LDVL=N;

	double *VR;
	VR = (double *)malloc(N*N*sizeof(double));
	int LDVR=N;
	
	int LWORK=8*N;

	double *WORK;
	WORK = (double *)malloc(LWORK*sizeof(double));
	
	int INFO;
	if(nout == 1){			/*out1 = spec(A,B)*/
		JOBVL = 'N';
		JOBVR = 'N';
		dggev_(&JOBVL,&JOBVR,&N,A,&LDA,B,&LDB,ALPHAR,ALPHAI,BETA,VL,&LDVL,VR,&LDVR,WORK,&LWORK,&INFO);
		for(i=0;i<N;i++){
			out1[i] = DoubleComplex(ALPHAR[i]/BETA[i],ALPHAI[i]/BETA[i]);
		}			
	}
	else if(nout == 2){		/*[out1,out2] = spec(A,B)*/
		JOBVL = 'N';
		JOBVR = 'N';
		dggev_(&JOBVL,&JOBVR,&N,A,&LDA,B,&LDB,ALPHAR,ALPHAI,BETA,VL,&LDVL,VR,&LDVR,WORK,&LWORK,&INFO);
		for(i=0;i<N;i++){
			out1[i] = DoubleComplex(ALPHAR[i],ALPHAI[i]);		
		}
		memcpy(out2,BETA,N*sizeof(double));
	}
	else if(nout == 3){	 /* [out1,out2,out3] = spec(A,B) */
		JOBVL = 'N';
		JOBVR = 'V';	
		dggev_(&JOBVL,&JOBVR,&N,A,&LDA,B,&LDB,ALPHAR,ALPHAI,BETA,VL,&LDVL,VR,&LDVR,WORK,&LWORK,&INFO);
		for(i=0;i<N;i++){
			out1[i] = DoubleComplex(ALPHAR[i],ALPHAI[i]);		
		}	
		memcpy(out2,BETA,N*sizeof(double));
		
		/*Because lapack routine doesn't give result in actual format, \
			so we have to change the VR little-bit and then return the function */
		
		/*See the Scilab code || see the lapack subroutine libary - DGGEV where \
			it is very explantory and explains all this.			
		*/
		double *EVimg;
		EVimg = (double *)malloc(N*N*sizeof(double));
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				EVimg[i+j*N] = 0;					
			}		
		}		
		assembleEigenvectorsInPlace(N,ALPHAI,VR,EVimg);		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				out3[i+j*N] = DoubleComplex(VR[i+j*N],EVimg[i+j*N]);			
			}		
		}
	}
	else if(nout == 4){
		JOBVL = 'V';
		JOBVR = 'V';	

		dggev_(&JOBVL,&JOBVR,&N,A,&LDA,B,&LDB,ALPHAR,ALPHAI,BETA,VL,&LDVL,VR,&LDVR,WORK,&LWORK,&INFO);

		for(i=0;i<N;i++){
			out1[i] = DoubleComplex(ALPHAR[i],ALPHAI[i]);		
		}	

		memcpy(out2,BETA,N*sizeof(double));
		
		double *EVimg;
		EVimg = (double *)malloc(N*N*sizeof(double));
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				EVimg[i+j*N] = 0;					
			}		
		}		
		assembleEigenvectorsInPlace(N,ALPHAI,VR,EVimg);		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				out4[i+j*N] = DoubleComplex(VR[i+j*N],EVimg[i+j*N]);			
			}		
		}		
		
		double *EVimg1;
		EVimg1 = (double *)malloc(N*N*sizeof(double));
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				EVimg1[i+j*N] = 0;			
			}		
		}		
		assembleEigenvectorsInPlace(N,ALPHAI,VL,EVimg1);
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				out3[i+j*N] = DoubleComplex(VL[i+j*N],EVimg1[i+j*N]);			
			}		
		}
	}
}
