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
#include "stdlib.h"
#include "stdio.h"
#include "types.h"
#include "pow.h"
#include "uint16.h"
#include "zeros.h"
#include "sum.h"
#include "ones.h"
#include "matrixMultiplication.h"
#include "division.h"
#include "matrixTranspose.h"
#include "subtraction.h"
#include "division.h"

void smvcorrela(float *in, int lx, int cx, float* r)
{
 float temp1[1* cx];
 float xbar[1* cx];
 float temp2[lx*1];
 float temp3[lx*cx];
 float temp4[lx*cx];
 float temp4_trans[cx*lx];
 float temp5[1* cx];
 float temp6[lx*cx];
 float std[1*cx];
 float std_trans[cx*1];
 float temp7[cx*cx];
 float temp8[cx*cx];

 sonesa ( temp2 ,  lx , 1 );                             //temp2= ones(lx,1)

 if(lx==1)
	{
		 szerosa (  r , cx ,cx );             //out= zeros(lx,cx)

	}

  else
	{

                  srowsuma(in, lx, cx, temp1); //temp1= sum(x, "r")
		
		  for(int i=0; i< 1*cx; i++)
			xbar[i]= srdivs(temp1[i], lx);                         // xbar= sum(x, "r")/ lx
/*		  //Debug Only*/
/*       		  for(int i= 0; i< 1*cx; i++)*/
/*			printf("xbar[%d]= %lf\t", i, xbar[i]);*/
/*		  printf("\n");*/
		
                 smulma(temp2, lx,1, xbar, 1, cx, temp3 );             //temp3= ones(lx,1)*xbar
		 sdiffa(in, lx*cx, temp3, lx*cx, temp4);               //temp4= r= x-ones(lx,1)*xbar
		 for(int i=0; i< lx*cx; i++)
		    temp6[i]= spows(temp4[i], 2);                        //temp6= r.^2
                  srowsuma(temp6, lx, cx, temp5);                      //temp5= sum(r.^2, "r")
		 for(int i=0; i< 1*cx; i++)
		    std[i]= spows(temp5[i], 0.5);                        //std=(sum(r .^2,"r")) .^ (0.5)
/*		  //Debug Only*/
/*       		  for(int i= 0; i< 1*cx; i++)*/
/*			printf("std[%d]= %lf\t", i, std[i]);*/
/*		  printf("\n");     			*/
		stransposea ( temp4 , lx , cx, temp4_trans);           //temp4_trans= r'
		stransposea ( std , 1 , cx, std_trans);                //std_trans= std'
		smulma(temp4_trans, cx,lx, temp4, lx, cx, temp7 );     //temp7= r'*r
		smulma(std_trans, cx, 1, std, 1,cx, temp8);           //temp8= std'*std
		
		srdiva (temp7, temp8, cx*cx, r);                       // r=(r'*r) ./ (std'*std)
		

	}



}
