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

/* FULL Rank factorization function in scilab */

/*
	//[Q,M,rk]=fullrf(A)
    //Full rank factorization : A=Q.M
    //with range(Q)=range(A) and ker(M)=ker(A),
    //Q full column rank , M full row rank
    // rk = rank(A) = #columns(Q) = #rows(M)
    //F.D.
*/

#include "fullrf.h"
#include <stdio.h>
#include <stdlib.h>
#include "svd.h"
#include <math.h>
#include "norm.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"

double dfullrfa(int ninp,double *inp1,int row,int col,double tol,double *out1,double *out2){
	
	int i,j;
	/* norm inp1 - norm(inp1,1)*/
	double na1;
	na1 = dnorma(inp1,row,col,1);
		
	if(ninp == 1){
		tol = sqrt(pow(2,-52));	
	}
	
	if(na1 < pow(1,-10)){
		out1 = NULL;
		out2 = NULL;
		return 0;	
	}
	
	double tol1;
	tol1 = tol*na1;
	
	double *U,*S,*V;
	U = (double *)malloc(row*row*sizeof(double));
	S = (double *)malloc(row*col*sizeof(double));	
	V = (double *)malloc(col*col*sizeof(double));
	
	double rk;
	rk = dsvda(tol1,inp1,row,col,0,4,U,S,V);
	
	/* sq = sqrt(s) */
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i == j){
				S[i*row+j] = pow(S[i*row+j],0.5);
			}
			else{
				S[i*row+j] = 0;			
			}	
		}	
	}
	
	double *Q;
	Q = (double *)malloc(row*col*sizeof(double));
	dmulma(U,row,row,S,row,col,Q);
	
	double *VT;
	VT = (double *)malloc(col*col*sizeof(double));
	dtransposea(V,col,col,VT);
	
	/* multiplication of sq*V' or S*VT */
	double *M;
	M = (double *)malloc(row*col*sizeof(double));
	dmulma(S,row,col,VT,col,col,M);

	/* This Program is not yet completed properly, as it outputs the whole matrix, instead of the exact output.

	if anyone finds, how to fix the size in INITFILLscidir.sci 
please change there and change below few lines of codes accordingly.

*/
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			//if(j < rk)		
			out1[i*col+j] = Q[i*col+j];
			//else
			//	out1[i*col+j] = 0;	
		}
		//printf("\n");	
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			//if(i < rk)	
				out2[i*col+j] = M[i*col+j];
			//else
			//	out2[i*col+j] = 0;
		}
	}
	
	return rk;
}
