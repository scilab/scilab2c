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

#include "matrixPow.h"
#include "lapack.h"
#include "eye.h"
#include "matrixMultiplication.h"


void dpowma(double* in, int size, double expand, double* out){

#ifndef WITHOUT_BLAS		
	switch ((int)expand){
		case 0 : 
			deyea(out,size,size);
			break;
		case 1 : 
			{
				int i;
				for (i=0;i<size*size;i++) out[i]=in[i];
			}
			break;
		default : 
			{
				int i=0,j=0,k=0;
				int One=1;
				
				for (i=1; i<expand; i++){
					for (j=0;j<size;j++) /*column*/ {
						for (k=0;k<size;k++)/*row*/{
							out[k+j*size]=ddot_(&size,in+k,&size,in+j*size,&One);
						}
					}
				}
			}
			break;
	}
#else
	switch ((int)expand){
		case 0 : 
			deyea(out,size,size);
			break;
		case 1 : 
			{
				int i;
				for (i=0;i<size*size;i++) out[i]=in[i];
			}
			break;
		default : 
			{
				int i=0,j=0;	
				double* Pow;
				Pow=malloc((uint)(size*size)*sizeof(double));
				for (i=0;i<size*size;i++) out[i]=in[i];
				for (i=1; i<expand; i++){
					for (j=0;j<size*size;j++) Pow[j]=out[j];
					dmulma(Pow,size,size,in,size,size,out);
				}
			}
			break;
	}
					

#endif
					
}
