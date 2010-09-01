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

#include <stdlib.h>
#ifndef WITHOUT_LAPACK
#include "lapack.h"
#endif
#include "determ.h"
#include "lapack.h"

double ddeterma(double * in, int size){
#ifndef WITHOUT_LAPACK
	int i=0, info=0;
	double out=0;
	double *inCopy=NULL;
	int* tmp=NULL;
	
	/*Calculation of the determinant*/
	switch (size){
		case 2 : out = in[0]*in[3]-in[1]*in[2];
			 break;
		case 3 : /*regle de Sarrus*/
			 out = in[0]*in[4]*in[8]+in[1]*in[5]*in[6]+in[2]*in[3]*in[7]
			      -in[0]*in[5]*in[7]-in[1]*in[3]*in[8]-in[2]*in[4]*in[6];
			 break;
		default : 
		
			  /*Copy the input matrix*/
			  inCopy=(double*)malloc((unsigned int)(size*size)*sizeof(double));
			  for (i=0;i<size*size;i++) inCopy[i]=in[i];

			  tmp=(int*)malloc((unsigned int)size*sizeof(int));			  
			  dgetrf_(&size, &size, inCopy, &size, tmp, &info);
			  out=1;
			  for (i=0;i<size;i++){
			  	if (tmp[i]!=i+1) out=-out;
			  	out=inCopy[i*(size+1)]*out;
			  }
			  free(tmp);
			  free(inCopy);
			  break;
	}
	
#else
	int i=0, j=0, k=0;
	double out=0, pivot=0;
	double *inCopy=NULL;
	
	/*Calculation of the determinant*/
	switch (size){
		case 2 : out = in[0]*in[3]-in[1]*in[2];
			 break;
		case 3 : /*regle de Sarrus*/
			 out = in[0]*in[4]*in[8]+in[1]*in[5]*in[6]+in[2]*in[3]*in[7]
			      -in[0]*in[5]*in[7]-in[1]*in[3]*in[8]-in[2]*in[4]*in[6];
			 break;
		default : 
				
				  /*Copy the input matrix*/
			  inCopy=malloc((unsigned int)(size*size)*sizeof(double));
			  for (i=0;i<size*size;i++) inCopy[i]=in[i];
			  
    			  for (i=0;i<size;i++){
				for (j=i+1;j<size;j++){
					pivot = inCopy[i*size+j]/inCopy[i*size+i];
					for (k=0;k<size-i;k++){
						inCopy[i*size+j+k*size]-=pivot*inCopy[i*size+i+k*size];
					}
				}
			  }
			  out=1;
			  for (i=0;i<size;i++){
			  	out *= inCopy[i*size+i];
			  }
			  free(inCopy);
			  break;
		
	}
#endif


	return out;	
}
