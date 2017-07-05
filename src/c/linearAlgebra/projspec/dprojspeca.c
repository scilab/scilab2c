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

/* PROJSPEC function in scilab */

/*
	//[S,P,D,index]=projspec(A)
    //Spectral characteristics of A at 0
    //S = reduced resolvent at 0 (S=-Drazin_inverse(A))
    //P = spectral projection at 0
    //D = Nilpotent operator at 0
    //index = index of the 0 eigenvalue
    //!

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "norm.h"
#include "eye.h"

#define eps pow(2,-52)

double dprojspeca(double *inp1,int row,int col,double *out1,double *out2,double *out3){
	double tol = pow(10,-6);
	int i,j,index;
	/*norm(A,1)*/
	double nor;
	nor = dnorma(inp1,row,col,1);
	
	/* P=eye(A),D=A,S=0*P;index=1; */
	if(nor < eps*row*row){
		memcpy(out2,inp1,row*col*sizeof(double));		
		deyea(out2,row,col);
		memcpy(out3,inp1,row*col*sizeof(double));
		for(i=0;i<row;i++){
			for(j=0;j<row;j++){
				out1[i*row+j] = 0;				
			}	
		}
		index = 1;
	}
	
	/* rcond(A) */	
	double *rcon;
	rcon = rcond(inp1,row);
	if(rcon > tol){
		dinverma(inp1,out1,row);
		for(i=0;i<row*col;i++){
			out2[i]=0;
			out3[i]=0;	
		}
		index = 0;
		return index;	
	}
	
	index = 1;
	

}
