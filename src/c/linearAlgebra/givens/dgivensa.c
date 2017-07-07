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

/*  GIVENS scilab function
	Syntax : u=givens(xy)
    u=givens(x,y)
    xy = [x;y], u=givens(xy)
	returns a 2*2 matrix u such that u*xy=[r;0].
	c is equal to u*xy
	givens(x,y)=givens([x;y])
*/

#include "givens.h"
#include <stdio.h>
#include <math.h>
#include "norm.h"

/* All variable names are according to scilab code */

void dgivensa(int ninp,double *inp1,int row,int col,double *inp2,int row1,int col1,int nout,double *out1,double *out2){
	double *x;	
	double r;
	x = (double *)malloc((double)2*sizeof(double));
	if(ninp == 2){
		if(row != 1 || col != 1 || row1 != 1 || col1 != 1){
			printf("Wrong size for input argument: A column vector expected.\n");
			return;		
		}
		*(x) = *(inp1);
		*(x+1) = *(inp2);
	}
	else{
		//printf("(%d %d)",row,col);
		if(row != 2 || col != 1){
			printf("Wrong size for input argument: A column vector expected.\n");						
			return;		
		}
		//printf("(%lf %lf)",inp1[0],inp1[1]);		
		x[0] = inp1[0];
		x[1] = inp1[1];	
	}
	if(*(x+1) != 0){
		//printf("(%lf %lf)",x[0],x[1]);
		/*Norm of type 2 - find the maximum singular value*/
		r = dnorma(x,2,1,2);
		//printf("%lf \n",r);	
		*(out1) = (*(x))/r;
		*(out1+1) = -(*(x+1))/r;
		*(out1+2) = (*(x+1))/r;
		*(out1+3) = (*(x))/r;
		if(nout == 2){
			*(out2) = r;
			*(out2+1) = 0;		
		}
		
	}	
	else{
		*(out1) = 1;
		*(out1+1) = 0;
		*(out1+2) = 1;
		*(out1+3) = 0;		
		if(nout == 2){
			*(out2) = *(x);
			*(out2+1) = *(x+1);
		}		
	}
}
