/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __LEVIN_H__
#define __LEVIN_H__



void dlevina (int n, double* cov, int lCov, int cCov, double* la, double* sig, double* lb);

void slevina (int n, float* cov, int lCov, int cCov, float* la, float* sig, float* lb);





/* levinUtils.c */
void dr1(double *in,int lines,int rows, int n, double * out);
void dr2(double *in,int lines,int rows, int n, double * out);
void dr3(double *in,int lines,int rows, int n, double * out);
void dr4(double *in,int lines,int rows, int n, double * out);
void sr1(float *in,int lines,int rows, int n, float * out);
void sr2(float *in,int lines,int rows, int n, float * out);
void sr3(float *in,int lines,int rows, int n, float * out);
void sr4(float *in,int lines,int rows, int n, float * out);



/*multiplications used in levin program, are differents from the classic multiplication*/
/*
	in1,in2 : matrices to multiply
	n : 
	rows : number of rows of in2
	ind_boucle : indice of the loop
	out : result matrix
	lines : number of lines of the result
	deb_out : 0 if the result start to the indice 0, 1 otherwise
	choix : 'u' or 'd', depends of in2. We take either the k first elements of in2 ('u') or the k last ('d'), 
		k is a nomber which depends of the indice of loop, the rows ... 
	*/
void dlevinmul(double* in1, double* in2, int n, int rows, int ind_boucle, double* out, int lines, int deb_out,char choix);
void dlevinmul2(double* in1, double *in2,int ind_boucle,int n,int rows,double* out);
void slevinmul(float* in1, float* in2, int n, int rows, int ind_boucle, float* out, int lines, int deb_out,char choix);
void slevinmul2(float* in1, float *in2,int ind_boucle,int n,int rows,float* out);


/*take the values of sig wanted*/
void dlevinsig(double *sig,int n, int rows, int lines, double *sig1);
void slevinsig(float *sig,int n, int rows, int lines, float *sig1);

/*a subtraction used in levin program, is different from the classic subtraction cause of the indices*/
/*
	in1,in2 : matrices to subtract
	n : 
	rows : number of rows of in2
	deb_in : place of the first element of in1
	ind_boucle : indice of the loop
	out : result matrix
	*/
void dlevinsub(double* in1, double* in2, int n, int rows, int deb_in, int ind_boucle, double* out);
void slevinsub(float* in1, float* in2, int n, int rows, int deb_in, int ind_boucle, float* out);

/*initialize a table*/
void dinitTab(double* in, int size);
void sinitTab(float* in, int size);

/*used for the multiplication by z which is equal to step forward*/
void ddecalage(double* in, int deb_in,int n,int rows,double * out);
void sdecalage(float* in, int deb_in,int n,int rows,float * out);

/*end*/




#endif /*__LEVIN_H__*/

