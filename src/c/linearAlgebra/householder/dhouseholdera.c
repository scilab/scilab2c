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

/* Householder orthogonal reflexion matrix */

/*
Syntax :- 
    //u=householder(v [,w])
    //Description
    //given 2 column vectors v w of same size householder(v,w) returns a unitary
    //column vector u, such that (eye-2*u*u')*v is proportional to w.
    //(eye-2*u*u') is the orthogonal Householder reflexion matrix
    //
    // w default value is eye(v). In this case vector (eye-2*u*u')*v is the
    // vector  eye(v)*(+-norm(v))
*/
#include <stdio.h>
#include <stdlib.h>
#include "householder.h"
#include "eye.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include <math.h>
#include "norm.h"

void dhouseholdera(int ninp,double *inp1,int row,double *inp2,double *out1){

	int i,j;
	double *x;
	x = (double *)malloc(row*sizeof(double));
	
	for(i=0;i<row;i++)
		x[i] = inp1[i];	
	
	if(ninp < 2){
		deyea(x,row,1);	
	}
	else{
		for(i=0;i<row;i++){
			x[i] = inp2[i];		
		}	
	}

	/* vt transpose of inp1 */
	
	double *vt;
	vt = (double *)malloc(row*sizeof(double));
	dtransposea(inp1,row,1,vt);
	
	/*wt transpose of inp2 */	
	double *wt;
	wt = (double *)malloc(row*sizeof(double));
	dtransposea(x,row,1,wt);
	
	/* vvt = inp1*vt */
	double *vvt;
	vvt = (double *)malloc(1*1*sizeof(double));
	dmulma(vt,1,row,inp1,row,1,vvt);
	
	/* wwt = inp2*wt */
	double *wwt;
	wwt = (double *)malloc(1*1*sizeof(double));
	dmulma(wt,1,row,x,row,1,wwt);
	
	/* a=-sqrt((v'*v)/(w'*w)) */
	double a;
	//a = (double *)malloc(1*1*sizeof(double));
	a = -sqrt(vvt[0]/wwt[0]);

	for(i=0;i<row;i++){
		out1[i] = x[i]*a+inp1[i];	
	}
	
	/* norm of out1 */
	double r;
	r = dnorma(out1,row,1,2);

	for(i=0;i<row;i++){
		out1[i]=out1[i]/r;	
	}
}
