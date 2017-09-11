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
#include "pow.h"
#include "division.h"
#include "types.h"
#include "uint16.h"
#include "zeros.h"
#include "sum.h"
#include "ones.h"
#include "matrixMultiplication.h"
#include "matrixTranspose.h"
#include "subtraction.h"
#include "division.h"

void dmvcorrela(double *in, int lx, int cx, double* r)
{
 double temp1[1* cx];
 double xbar[1* cx];
 double temp2[lx*1];
 double temp3[lx*cx];
 double temp4[lx*cx];
 double temp4_trans[cx*lx];
 double temp5[1* cx];
 double temp6[lx*cx];
 double std[1*cx];
 double std_trans[cx*1];
 double temp7[cx*cx];
 double temp8[cx*cx];

 donesa ( temp2 ,  lx , 1 );                             //temp2= ones(lx,1)

 if(lx==1)
	{
		 dzerosa (  r , cx ,cx );             //out= zeros(lx,cx)

	}

  else
	{

                  drowsuma(in, lx, cx, temp1); //temp1= sum(x, "r")
		
		  for(int i=0; i< 1*cx; i++)
			xbar[i]= drdivs(temp1[i], lx);                         // xbar= sum(x, "r")/ lx
/*		  //Debug Only*/
/*       		  for(int i= 0; i< 1*cx; i++)*/
/*			printf("xbar[%d]= %lf\t", i, xbar[i]);*/
/*		  printf("\n");*/
		
                 dmulma(temp2, lx,1, xbar, 1, cx, temp3 );             //temp3= ones(lx,1)*xbar
		 ddiffa(in, lx*cx, temp3, lx*cx, temp4);               //temp4= r= x-ones(lx,1)*xbar
		 for(int i=0; i< lx*cx; i++)
		    temp6[i]= dpows(temp4[i], 2);                        //temp6= r.^2
                  drowsuma(temp6, lx, cx, temp5);                      //temp5= sum(r.^2, "r")
		 for(int i=0; i< 1*cx; i++)
		    std[i]= dpows(temp5[i], 0.5);                        //std=(sum(r .^2,"r")) .^ (0.5)
/*		  //Debug Only*/
/*       		  for(int i= 0; i< 1*cx; i++)*/
/*			printf("std[%d]= %lf\t", i, std[i]);*/
/*		  printf("\n");     			*/
		dtransposea ( temp4 , lx , cx, temp4_trans);           //temp4_trans= r'
		dtransposea ( std , 1 , cx, std_trans);                //std_trans= std'
		dmulma(temp4_trans, cx,lx, temp4, lx, cx, temp7 );     //temp7= r'*r
		dmulma(std_trans, cx, 1, std, 1,cx, temp8);           //temp8= std'*std
		
		drdiva (temp7, temp8, cx*cx, r);                       // r=(r'*r) ./ (std'*std)
		

	}



}
