/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "mvcorrel.h"
#include "stdio.h"
#include "types.h"
#include "uint16.h"
#include "zeros.h"
#include "sum.h"
#include "ones.h"
#include "matrixMultiplication.h"
#include "subtraction.h"

void dmvcorrela(double *in, int lx, int cx, double* out)
{
 double temp1[1* cx];
 double xbar[1* cx];
 double temp2[lx*1];
 double temp3[lx*cx];
 double temp4[lx*cx];
 double temp5[1* cx];
 double std[1*cx];

 donesa ( temp2 ,  lx , 1 );                             //temp2= ones(lx,1)

 if(lx==1)
	{
		 dzerosa (  out , lx ,cx );             //out= zeros(lx,cx)

	}

  else
	{

                  drowsuma(in, lx, cx, temp1); //temp1= sum(x, "r")
		
		  for(int i=0; i< 1*cx; i++)
			xbar[i]= temp1[i]/ lx;                         // xbar= sum(x, "r")/ lx
		  //Debug Only
       		  for(int i= 0; i< 1*cx; i++)
			printf("xbar[%d]= %lf", i, xbar[i]);
		  printf("\n");
		
                 dmulma(temp2, lx,1, xbar, 1, cx, temp3 );             //temp3= ones(lx,1)*xbar
		 ddiffa(in, lx*cx, temp3, lx*cx, temp4);               //temp4= x-ones(lx,1)*xbar
		 for(int i=0; i< lx*cx; i++)
		    temp4[i]= pow(temp4[i], 2);     
                  drowsuma(temp4, lx, cx, temp5);                      //temp5= sum(r.^2, "r")
		 for(int i=0; i< 1*cx; i++)
		    std[i]= pow(temp5[i], 0.5);
		  //Debug Only
       		  for(int i= 0; i< 1*cx; i++)
			printf("std[%d]= %lf", i, std[i]);
		  printf("\n");     			
	}



}
