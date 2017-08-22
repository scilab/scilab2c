/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*Function to find kalm */

#include "lapack.h"
#include "stdlib.h"
#include "doubleComplex.h"
#include "stdio.h"
#include "string.h"
#include "kalm.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include "matrixInversion.h"
#include "addition.h"
#include "subtraction.h"
#include "eye.h"

void zkalma(doubleComplex* y, int y_row, int y_col, doubleComplex* x0, int x0_row, int x0_col,doubleComplex* p0, int p0_row, int p0_col, doubleComplex* f, int f_row, int f_col, doubleComplex* g, int g_row, int g_col, doubleComplex* h, int h_row, int h_col, doubleComplex* q, int q_row, int q_col, doubleComplex* r, int r_row, int r_col, doubleComplex* x1, doubleComplex* p1, doubleComplex* x, doubleComplex* p)
	    
{ 
 doubleComplex k[p0_row*h_row];
 doubleComplex h_trans[h_col*h_row];
 doubleComplex temp1[p0_row*h_row];
 doubleComplex temp2[h_row*p0_col];
 doubleComplex temp3[h_row*h_row];
 doubleComplex temp4[h_row*h_row];
 doubleComplex temp5[h_row*h_row];
 doubleComplex temp6[p0_row*p0_col];
 doubleComplex temp7[p0_row*h_col];
 doubleComplex temp8[p0_row*p0_col];
 doubleComplex f_trans[f_col*f_row];
 doubleComplex g_trans[g_col*g_row];
 doubleComplex temp9 [f_row*p0_col];
 doubleComplex temp10[f_row*f_row];
 doubleComplex temp11 [g_row*q_col];
 doubleComplex temp12[g_row*g_row];
 doubleComplex temp13[h_row*x0_col];
 doubleComplex temp14[h_row*x0_col];
 doubleComplex temp15[p0_row*x0_col];



 ztransposea(h, h_row, h_col, h_trans);
 zmulma(p0, p0_row, p0_col, h_trans, h_col, h_row, temp1);    //temp1= p0*h'
 zmulma(h, h_row, h_col, p0, p0_row, p0_col, temp2);          //temp2= h*p0
 zmulma(temp2, h_row, p0_col, h_trans, h_col, h_row, temp3);  //temp3= h*p0*h'
 zadda(temp3, h_row*h_row, r, r_row*r_col, temp4);            //temp4= h*p0*h'+r

/*//Debug Only*/
/* for(int i=0; i< h_row*h_row; i++)*/
/*	printf("temp4[%d] = %lf + i %lf\t",i, zreals(temp4[i]) , zimags(temp4[i]));*/
/*   printf("\n");*/

 zinverma(temp4, temp5, h_row);                               //temp5= (h*p0*h'+r)**(-1)

 zmulma(temp1, p0_row, h_row, temp5, h_row, h_row, k);        //k=p0*h'*(h*p0*h'+r)**(-1)

/*//Debug Only*/
/* for(int i=0; i< p0_row*h_row; i++)*/
/*	printf("k[%d] = %lf \t",i, k[i]);*/
/*   printf("\n");*/
   
   
 zeyea(temp6, p0_row, p0_col);                                //temp6 = eye(p0)
 zmulma(k, p0_row, h_row, h, h_row, h_col, temp7);            //temp7 = k*h
 zdiffa(temp6, p0_row*p0_col, temp7, p0_row*h_col, temp8);    //temp8= eye(p0)- k*h
 zmulma(temp8, p0_row, p0_col, p0, p0_row, p0_col, p);        //p=(eye(p0)-k*h)*p0

/*//Debug Only*/
/* for(int i=0; i< p0_row*p0_col; i++)*/
/*	printf("p[%d] = %lf \t",i, p[i]);*/
/*   printf("\n");*/


 ztransposea(g, g_row, g_col, g_trans);
 ztransposea(f, f_row, f_col, f_trans);
 zmulma(f, f_row, f_col, p, p0_row, p0_col, temp9);             //temp9= f*p
 zmulma(temp9, f_row, p0_col, f_trans, f_col, f_row, temp10);  //temp10= f*p*f'
 zmulma(g, g_row, g_col, q, q_row, q_col, temp11);            //temp11= g*q
 zmulma(temp11, g_row, q_col, g_trans, g_col, g_row, temp12); //temp12= g*q*g'
 zadda(temp10, f_row*f_row, temp12, g_row*g_row, p1);         //p1=f*p*f'+g*q*g'

/* //Debug Only*/
/* for(int i=0; i< f_row*f_row; i++)*/
/*	printf("p1[%d] = %lf \t",i, p1[i]);*/
/*   printf("\n");*/
 
 
 zmulma(h, h_row, h_col, x0, x0_row, x0_col, temp13);         //temp13= h*x0
 zdiffa(y, y_row*y_col, temp13, h_row*x0_col, temp14);        //temp14= y-h*x0
 zmulma(k, p0_row, h_row, temp14, h_row, x0_col, temp15);   //temp15= k*(y-h*x0)
 zadda(x0, x0_row*x0_col, temp15, p0_row*x0_col, x);          //x=x0+k*(y-h*x0) 

/* //Debug Only*/
/* for(int i=0; i< x0_row*x0_col; i++)*/
/*	printf("x[%d] = %lf \t",i, x[i]);*/
/*   printf("\n");*/
 

 zmulma(f, f_row, f_col, x, x0_row, x0_col, x1) ;              //x1= f*x

/* //Debug Only*/
/* for(int i=0; i< f_row*x0_col; i++)*/
/*	printf("x1[%d] = %lf \t",i, x1[i]);*/
/*   printf("\n");*/
 


}
