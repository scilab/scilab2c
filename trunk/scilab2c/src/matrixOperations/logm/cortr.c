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
  This is a transcription of the fortran subroutine cortr.f
 */
 
#include "logm_internal.h"
#include "conj.h"
#include "addition.h"
#include "multiplication.h"
#include "division.h"



void cortr(doubleComplex* in, int n, int low, int high, doubleComplex* ort, doubleComplex* z){
	int i=0, j=0, k=0, ii=0, iend=0, ip1=0;
	double norm;
	doubleComplex s;


	/*.......... initialize eigenvector matrix ..........*/
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (i==j) z[(j-1)*n+i-1]=DoubleComplex(1,0);
			else z[(j-1)*n+i-1]=DoubleComplex(0,0);
		}
	}
	
	/*.......... form the matrix of accumulated transformations
                     from the information left by corth ..........*/
        iend = high -low -1;
        if (iend >= 0){
        	for (ii=1;ii<=iend;ii++){
        		i=high-ii;
        		if ( ( !((zreals(ort[i-1])==0) && (zimags(ort[i-1])==0) )) 
        		&& ( !((zreals(in[(i-2)*n+i-1])==0) && (zimags(in[(i-2)*n+i-1])==0) ) ) ){
                		/* .......... norm below is negative of h formed in corth .........*/
        			norm = zreals(zmuls(zconjs(in[(i-2)*n+i-1]),ort[i-1]));
        			if (norm != 0 ){
        				ip1=i+1;
        				for(k=ip1;k<=high;k++){
        					ort[k-1] = DoubleComplex( zreals(in[(i-2)*n+k-1]), zimags(in[(i-2)*n+k-1]) );
        				}
        				
        				for (j=i;j<=high;j++){
        					s=DoubleComplex(0,0);
        					for(k=i;k<=high;k++){
        						s=zadds(s, zmuls(zconjs(ort[k-1]),z[(j-1)*n+k-1]));
        					}
        					
        					s = zrdivs(s,DoubleComplex(norm,0));

        					for(k=i;k<=high;k++){
        						z[(j-1)*n+k-1]=zadds(z[(j-1)*n+k-1], zmuls(s,ort[k-1]));
        					}
        				}
        			}
        		}
        	}
        }
}

