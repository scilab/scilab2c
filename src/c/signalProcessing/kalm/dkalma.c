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
#include "stdio.h"
#include "string.h"
#include "kalm.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include "matrixInversion.h"
#include "addition.h"
#include "subtraction.h"
#include "eye.h"

void dkalma(double* y, int y_row, int y_col, double* x0, int x0_row, int x0_col, double* p0, int p0_row, int p0_col, double* f, int f_row, int f_col, double* g, int g_row, int g_col, double* h, int h_row, int h_col, double* q, int q_row, int q_col, double* r, int r_row, int r_col, double* x1, double* p1, double* x, double* p)
	    
{ 
 double k[p0_row*h_row];
 double h_trans[h_col*h_row];
 double temp1[p0_row*h_row];
 double temp2[h_row*p0_col];
 double temp3[h_row*h_row];
 double temp4[h_row*h_row];
 double temp5[h_row*h_row];
 double temp6[p0_row*p0_col];
 double temp7[p0_row*h_col];
 double temp8[p0_row*p0_col];
 double f_trans[f_col*f_row];
 double g_trans[g_col*g_row];
 double temp9 [f_row*p0_col];
 double temp10[f_row*f_row];
 double temp11 [g_row*q_col];
 double temp12[g_row*g_row];
 double temp13[h_row*x0_col];
 double temp14[h_row*x0_col];
 double temp15[p0_row*x0_col];



 dtransposea(h, h_row, h_col, h_trans);
 dmulma(p0, p0_row, p0_col, h_trans, h_col, h_row, temp1);    //temp1= p0*h'
 dmulma(h, h_row, h_col, p0, p0_row, p0_col, temp2);          //temp2= h*p0
 dmulma(temp2, h_row, p0_col, h_trans, h_col, h_row, temp3);  //temp3= h*p0*h'
 dadda(temp3, h_row*h_row, r, r_row*r_col, temp4);            //temp4= h*p0*h'+r

/*//Debug Only*/
/* for(int i=0; i< h_row*h_row; i++)*/
/*	printf("temp4[%d] = %lf \t",i, temp4[i]);*/
/*   printf("\n");*/

 dinverma(temp4, temp5, h_row);                               //temp5= (h*p0*h'+r)**(-1)

 dmulma(temp1, p0_row, h_row, temp5, h_row, h_row, k);        //k=p0*h'*(h*p0*h'+r)**(-1)

/*//Debug Only*/
/* for(int i=0; i< p0_row*h_row; i++)*/
/*	printf("k[%d] = %lf \t",i, k[i]);*/
/*   printf("\n");*/
   
   
 deyea(temp6, p0_row, p0_col);                                //temp6 = eye(p0)
 dmulma(k, p0_row, h_row, h, h_row, h_col, temp7);            //temp7 = k*h
 ddiffa(temp6, p0_row*p0_col, temp7, p0_row*h_col, temp8);    //temp8= eye(p0)- k*h
 dmulma(temp8, p0_row, p0_col, p0, p0_row, p0_col, p);        //p=(eye(p0)-k*h)*p0

/*//Debug Only*/
/* for(int i=0; i< p0_row*p0_col; i++)*/
/*	printf("p[%d] = %lf \t",i, p[i]);*/
/*   printf("\n");*/


 dtransposea(g, g_row, g_col, g_trans);
 dtransposea(f, f_row, f_col, f_trans);
 dmulma(f, f_row, f_col, p, p0_row, p0_col, temp9);             //temp9= f*p
 dmulma(temp9, f_row, p0_col, f_trans, f_col, f_row, temp10);  //temp10= f*p*f'
 dmulma(g, g_row, g_col, q, q_row, q_col, temp11);            //temp11= g*q
 dmulma(temp11, g_row, q_col, g_trans, g_col, g_row, temp12); //temp12= g*q*g'
 dadda(temp10, f_row*f_row, temp12, g_row*g_row, p1);         //p1=f*p*f'+g*q*g'

/* //Debug Only*/
/* for(int i=0; i< f_row*f_row; i++)*/
/*	printf("p1[%d] = %lf \t",i, p1[i]);*/
/*   printf("\n");*/
 
 
 dmulma(h, h_row, h_col, x0, x0_row, x0_col, temp13);         //temp13= h*x0
 ddiffa(y, y_row*y_col, temp13, h_row*x0_col, temp14);        //temp14= y-h*x0
 dmulma(k, p0_row, h_row, temp14, h_row, x0_col, temp15);   //temp15= k*(y-h*x0)
 dadda(x0, x0_row*x0_col, temp15, p0_row*x0_col, x);          //x=x0+k*(y-h*x0) 

/* //Debug Only*/
/* for(int i=0; i< x0_row*x0_col; i++)*/
/*	printf("x[%d] = %lf \t",i, x[i]);*/
/*   printf("\n");*/
 

 dmulma(f, f_row, f_col, x, x0_row, x0_col, x1) ;              //x1= f*x

/* //Debug Only*/
/* for(int i=0; i< f_row*x0_col; i++)*/
/*	printf("x1[%d] = %lf \t",i, x1[i]);*/
/*   printf("\n");*/
 


}
