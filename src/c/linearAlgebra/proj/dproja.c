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

/* Scilab function proj code in C */

#include <stdio.h>
#include <stdlib.h>
#include "proj.h"
#include "eye.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include <math.h>
#include "norm.h"


double dproja(double *x1,int l,int k,double *x2,int m2,int n2,double *y){
	int i,j;
	double *w;
	w = (double *)malloc(l*l*sizeof(double));
	double rk;
	rk = drowcompa(1,x1,l,k,NULL,0,w);
	
	double *w1;
	w1 = (double *)malloc(rk*l*sizeof(double));
	
	for(i=0;i<l*rk;i++){
		w1[i]=w[i];	
	}	

	double *x1t;
	x1t = (double *)malloc((l-n)*l*sizeof(double);
	
	for(i=n;i<l;i++){
		for(j=0;j<l;j++){
			x1t[i-n+j*l] = w1[i+j*l]; 
		}					
	}		
	
	double x1x2;
	x1x2 = (double *)malloc((l-n+1)*n2*sizeof(double));
	dmulma(x1t,l-n+1,l,x2,m2,n2,x1x2);
		
	double *inx1x2;
	inx1x2 = (double *)malloc();
		
	
 
	
	
	
	











	
}
