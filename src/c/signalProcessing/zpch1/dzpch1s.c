/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#include<stdio.h>
#include<math.h>
#include "zpch1.h"
#include "multiplication.h"
#include "conj.h"
#include "abs.h"
#define PI 3.14159265
double dzpch1s(double N,double e,double wc,doubleComplex* out)
{
	doubleComplex accumulate,tp;
      double B,r,R,gain,realVal;
      double temp=sqrt(1+e*e);
    
    B=pow((temp+1)/e,1/N);
    
    r=wc*((B*B-1)/(2*B));
    R=wc*((B*B+1)/(2*B));
    
    int k;
	double t1=1;
	double t2=0;
	accumulate=DoubleComplex(t1,t2);
    for(k=0;k<N;k++)
    {
      double theta;
    theta=(PI/2)+((2*k+1)*PI)/(2*N);
      double xk,yk;
    xk=r*cos(theta);
    yk=R*sin(theta);
    out[k]=DoubleComplex(xk,yk);
	tp=DoubleComplex(xk,yk);
    accumulate=zmuls(accumulate,tp);
    }
	
    realVal=zreals(accumulate);
	gain=dabss(realVal);
    if (N==2*(int)(N/2)) 
            gain=gain/sqrt(1+e*e);
return gain;
		
}

