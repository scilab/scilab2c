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

/*Funtion to find faurre */

#include "lapack.h"
#include "stdlib.h"
#include "string.h"
#include "faurre.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include "matrixInversion.h"
#include "addition.h"
#include "subtraction.h"
#include "eye.h"
#include "matrixDivision.h"

void dfaurrea(int n, double* H, int H_row, int H_col, double* F, int F_row, int F_col, double* G, int G_row, int G_col, double * R0, int R0_row, int R0_col, double* P, double *R , double* T )
{ 

/*Variable Declaration Start*/
 double R0_inv[R0_row* R0_col];
 double temp1[G_row* R0_col];
 double Pn[G_row* G_row];
 double Pn_temp[G_row*G_row];
 double G_trans[G_col*G_row];
 double H_trans[H_col*H_row];
 double F_trans[F_col*F_row];
 double A_trans[G_col*G_row];
 double temp2[F_row*G_row];
 double temp3[F_row*H_row];
 double A[G_row*G_col];
 double temp4[H_row*G_row];
 double temp5[H_row*H_row];
 double temp6[R0_row*R0_col];
 double temp7[G_row*R0_row];
 double temp8[G_row*G_row];
 double temp9[F_row*F_col];
 double temp10[H_row*G_row];
 double temp11[H_row*H_row];
 double temp12[F_row*G_row];
 double temp13[F_row*H_row];
 double temp14[G_row*G_col];
/*Variable Declaration End*/

 dinverma(R0, R0_inv, R0_row);   //R0_inv= inv(R0)
 dmulma(G, G_row, G_col, R0_inv, R0_row, R0_col, temp1);   //temp1= G* inv(R0)
 dtransposea(G, G_row, G_col, G_trans);                    //G_trans= G'
 dmulma(temp1, G_row, R0_col, G_trans, G_col, G_row, Pn ); // Pn= G* inv(R0)* G'
 dtransposea(H, H_row, H_col, H_trans);                    //H_trans= H'
 dtransposea(F, F_row, F_col, F_trans);                    //F_trans= F'

/*//Debug Only*/
/* for(int i=0; i< G_row*G_row; i++)*/
/*	printf("Before loop Pn[%d]= %lf \t", i, Pn[i]);*/
/* printf("\n");*/

 for(int i=1;i <= n ; i++)
	{
		dmulma(F, F_row, F_col, Pn, G_row, G_row, temp2);           //temp2= F*Pn;
		dmulma(temp2, F_row, G_row, H_trans, H_col, H_row, temp3);  //temp3= F*Pn*H'
		ddiffa( G, G_row*G_col, temp3, F_row*H_row, A);             //A = G- F*Pn*H'
		dtransposea(A, G_row, G_col, A_trans);                      //A_trans= A'
                dmulma(H, H_row, H_col, Pn, G_row, G_row, temp4);           //temp4= H*Pn
                dmulma(temp4, H_row, G_row, H_trans, H_col, H_row, temp5 ); //temp5= H*Pn*H'
    	        ddiffa(R0, R0_row*R0_col, temp5, H_row*H_row,temp6 );       //temp6= R0-H*Pn*H'
                drdivma(A,G_row, G_col, temp6, R0_row, R0_col, temp7);      //temp7= A / (R0-H*Pn*H')
		dmulma(temp7, G_row, R0_row, A_trans, G_col, G_row, temp8); //temp8 =  A / (R0-H*Pn*H')*A'
 		dmulma(temp2, F_row, G_row, F_trans, F_col, F_row, temp9);  //temp9= F*Pn*F'
                dadda(temp9, F_row*F_col,temp8,G_row*G_row, Pn_temp);       //Pn_temp = F*Pn*F'+ A / (R0-H*Pn*H')*A'
     		for(int j=0; j< G_row*G_row; j++)
			Pn[j]= Pn_temp[j];

	}

/* //Debug Only*/
/* for(int i=0; i< G_row*G_row; i++)*/
/*	printf("Afterloop Pn[%d]= %lf \t", i, Pn[i]);*/
/* printf("\n");*/

   for(int j=0; j< G_row*G_row; j++)
		P[j]= Pn[j];

 dmulma(H, H_row, H_col, P, G_row, G_row, temp10);                         //temp10= H*P
 dmulma(temp10, H_row, G_row, H_trans, H_col, H_row, temp11 );             //temp11= H*P*H'
 ddiffa(R0, R0_row*R0_col, temp11, H_row*H_row, R );                       //R= R0-H*P*H'

/* //Debug Only*/
/* for(int i=0; i< H_row*H_row; i++)*/
/*	printf("R[%d]= %lf \t", i, R[i]);*/
/* printf("\n");*/

 dmulma(F, F_row, F_col, P, G_row, G_row, temp12);                          //temp12= F*P;
 dmulma(temp12, F_row, G_row, H_trans, H_col, H_row, temp13);               //temp13= F*P*H'
 ddiffa( G, G_row*G_col, temp13, F_row*H_row, temp14);                      //temp14 = G- F*P*H'
 drdivma(temp14,G_row, G_col, R, R0_row, R0_col, T);                        //T= (G-F*P*H')/ R

/* //Debug Only*/
/* for(int i=0; i< G_row*R0_row; i++)*/
/*	printf("T[%d]= %lf \t", i, T[i]);*/
/* printf("\n");*/

}
