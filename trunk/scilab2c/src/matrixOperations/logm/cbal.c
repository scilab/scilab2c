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
 
 
 /*
  This is a transcription of the fortran subroutine cbal.f
 */

#include "multiplication.h" 
#include "logm_internal.h"
#include "abs.h"

/******************/
/* Sous-Fonctions */
/******************/
static int boucle_100(doubleComplex* in, int size, int l, int* j, int* m, int *iexc){
	int jj=0, i=0;
	for (jj=1;jj<=l;jj++){
		*j=l+1-jj;
		for(i=1;i<=l;i++){
			if(i!=(*j)) {
				if ( (zreals(in[((*j)-1)*size+i-1])!=0) || (zimags(in[((*j)-1)*size+i-1])!=0) ) break;
			}
		}
		if (i!=(l+1)) break;
		else {
			*m=l;
			*iexc=1;
			return 20;
		}
	}
	return 140;
}


static int boucle_140(doubleComplex* in, int size, int k, int l, int* j, int* m, int *iexc){
	int i=0;
	for ((*j)=k;(*j)<=l;(*j)++){
		for(i=k;i<=l;i++){
			if(i!=(*j)) {
				if ( (zreals(in[(i-1)*size+(*j)-1])!=0) || (zimags(in[(i-1)*size+(*j)-1])!=0) ) break;
			}
		}
		if (i!=(l+1)) break;
		else{
			*m=k;
			*iexc=2;
			return 20;
		}
	}
	return 170;
}


/***********************/
/* Fonction principale */
/***********************/

void cbal(doubleComplex* in, int n, int* low, int* high, double* scale){
	const double radix=2;
	double b2=0, c=0, r=0, g=0, f=0, s=0;
	int k=0, l=0, continuer=1, j=0, i=0, iexc=0, noconv=0;
	int result, m;
	doubleComplex fCpx;
	
	b2=radix*radix;
	k=1;
	l=n;

	result= boucle_100(in,n,l,&j,&m, &iexc);
	while(continuer){
		if(result==20){
			scale[m-1] = j;
	      		if (j != m) { 
	      			for(i=1; i<=l;i++){
					fCpx = in[(i-1)*n+j-1];
					in[(i-1)*n+j-1] = in[(i-1)*n+m-1];
					in[(i-1)*n+m-1] = fCpx;
				}
				for(i=k; i<=m; i++){
					fCpx = in[(j-1)*n+i-1];
					in[(j-1)*n+i-1] = in[(m-1)*n+i-1];
					in[(m-1)*n+i-1] = fCpx;
				}
	      		}
		
			if (iexc==1){
				if (l==1) {
					continuer=0;
					break;
				}
				else {
					l--;
					result = boucle_100(in,n,l,&j,&m, &iexc);
				}
			}
			else if (iexc==2){
				k++;
				result = boucle_140(in,n,k,l,&j,&m, &iexc);
			}
			

		}
		
		if (result == 140){
			result = boucle_140(in,n,k,l,&j,&m, &iexc);
		}
		
		if (result == 170){
			continuer=0;
		}
	}
	
	for (i=k;i<=l;i++){
		scale[i-1]=1;
	}
	
	do{
		noconv=0; /* noconv=false */
		for (i=k;i<=l;i++){
			c=0;
			r=0;
			
			
			for (j=k;j<=l;j++){
				if(j!=i){
					c += ( dabss(zreals(in[(i-1)*n+j-1])) + dabss(zimags(in[(i-1)*n+j-1])) );
					r += ( dabss(zreals(in[(j-1)*n+i-1])) + dabss(zimags(in[(j-1)*n+i-1])) );
				}
			}
			
			/* :::::::::: guard against zero c or r due to underflow :::::::::: */
			if ( (r!=0) && (c!=0) ){
				g=r/radix;
				f=1;
				s=c+r;
				
				while (c < g){
			         	f = f * radix;
         				c = c * b2;	
         			}
         			
         			g = r * radix;	
			  	while(c >= g) {
					f = f / radix;
					c = c / b2;				  	
					
				}
				/*  :::::::::: now balance :::::::::: */
				if (((c + r) / f) < 0.950 * s) {
					g = 1 / f;
					scale[i-1] = scale[i-1] * f;
					noconv = 1;

					for (j = k; j <= n; j++) 
						in[(j-1)*n+i-1] = zmuls(in[(j-1)*n+i-1],DoubleComplex(g,0));
					
					for (j = 1; j <= l; j++) 
						in[(i-1)*n+j-1] = zmuls(in[(i-1)*n+j-1],DoubleComplex(f,0));
				 }
			}
		}
	}while(noconv); /* while (noconv == true) */
	
	*low = k;
	*high = l;
}

