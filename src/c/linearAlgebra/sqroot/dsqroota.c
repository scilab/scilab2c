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

/* Function - sqroot of scilab, W*W' hermitian factorization */

#include <stdio.h> 
#include "stdlib.h"
#include "string.h"
#include <math.h>
#include "matrixTranspose.h"
#include "svd.h"
#include "matrixMultiplication.h"

#define eps 2.22044604925e-16

/*It would be good, if you are doing conversoins for only valid inputs before
 running the program, check all the conditions before hand.
*/

void dsqroota(double *inp,int row,int col, double *out){	
	if(row != col){
		printf("Enter valid inputs only - matrix should be symetric\n");
		return;
	}
	int i,j;
	double *U,*S,*V;
	double *A,*B;
	int rk;
	
	U = (double *)malloc((double)row*row*sizeof(double));
	S = (double *)malloc((double)Min(row,col)*Min(row,col)*sizeof(double));		
	V = (double *)malloc((double)col*col*sizeof(double));
	A = (double *)malloc(rk*rk*sizeof(double));
	B = (double *)malloc(rk*row*sizeof(double));
	
	double *Q1;	
	Q1 = (double *)malloc(row*col*sizeof(double));	
	
	dtransposea(inp,row,col,Q1);
	
	double *Q2;
	Q2 = (double *)malloc(col*row*sizeof(double));

	/* Q2 = (inp+inp1')/2; */
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			Q2[i+j*row] = ((inp[i+j*row]+Q1[i+j*row])/2);	
		}	
	}
	
	/*  norm(Q2-Q1,1) - finding the max value from sum of columns */ 
	double sum = 0;
	double maxi=0;
	for(i=0;i<row;i++){
		sum = 0;			
		for(j=0;j<col;j++) sum+=(Q2[i*row+j]-inp[i*row+j]);	
		if(maxi < sum){
			maxi = sum;	
		}
	}		
	
	/* if norm(Q1-Q,1) > 100*%eps then */
	if(maxi > 100*eps){
		printf("Warning: Wrong size for input argument and Symmetric expected\n");	
	}
	maxi = 0;
	for(i=0;i<col;i++){
		sum=0;
		for(j=0;j<row;j++) sum+=Q1[i*row+j];
		if(maxi < sum){
			maxi = sum;		
		}
	}

	/*if norm(Q,1) < sqrt(%eps) then S=[];return;end*/

	if(maxi < sqrt(eps)){
		out = NULL;	
	}
	else{		
		rk = dsvda(0,inp,row,col,0,4,U,S,V);
		
		/*Will be used in complex numbers*/		
		//C = (double *)malloc(rk*row*sizeof(double));
		
		/*for(i=0;i<row;i++){
			for(j=0;j<row;j++){
				printf("%lf ",S[i*row+j]);			
			}	
			printf("\n");	
		}*/
		/*sqrt of S*/
		printf("%d ",rk);
		for(i=0;i<rk;i++){
			for(j=0;j<rk;j++){
				A[i*rk+j] = sqrt(S[i*row+j]);
				//printf("%lf ",A[i*rk+j]);
			}
		}
		for(i=0;i<col*rk;i++){
			B[i] = V[i];
			//printf("%lf ",B[i]);	
		}
		//printf("\n");
		/*for(i=0;i<rk;i++){
			for(j=0;j<rk;j++){
				//A[i*rk+j] = sqrt(S[i*row+j]);
				printf("%lf ",A[i*rk+j]);
			}
			printf("\n");
		}*/
		/*for(i=0;i<col;i++){
			for(j=0;j<rk;j++){
				//B[i*col+j] = VT[i*col+j];	
				printf("%lf ",B[i*col+j]);	
			}	
			printf("\n");
		}*/
		dmulma(B,col,rk,A,rk,rk,out);
	}
}
