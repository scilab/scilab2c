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
   This is a transcription of the fortran subroutine corth.f
   */


#include "logm_internal.h"
#include "abs.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "conj.h"

void corth(doubleComplex* in , int n, int low,int high, doubleComplex* ort){
	int la=0, kp1=0, m=0, mp=0, i=0, j=0, ii=0, jj=0;
	double h=0, scale=0, g=0, f=0;
	doubleComplex fCpx;

	la = high - 1 ;
	kp1 = low + 1 ;
	if (la >= kp1) {

		for (m = kp1; m <= la; m++){
			h = 0;
			ort[m-1]=DoubleComplex(0,0);
			scale = 0;
			/* :::::::::: scale column (algol tol then not needed) :::::::::: */
			for (i = m; i <= high; i++) 
				scale = scale + dabss(zreals(in[(m-2)*n+i-1])) + dabss(zimags(in[(m-2)*n+i-1]));



			if (scale != 0) {
				mp = m + high;
				/* :::::::::: for i=igh step -1 until m do -- :::::::::: */
				for (ii = m; ii <= high; ii++){
					i = mp - ii;
					ort[i-1] = zrdivs(in[(m-2)*n+i-1],DoubleComplex(scale,0));				   
					h = h + zreals(ort[i-1]) * zreals(ort[i-1]) + zimags(ort[i-1]) * zimags(ort[i-1]);
				}

				
				g = dsqrts(h);

				f = dsqrts(zreals(ort[m-1]) * zreals(ort[m-1]) + zimags(ort[m-1]) * zimags(ort[m-1]));

				if (f == 0){
					ort[m-1]=DoubleComplex(g,zimags(ort[m-1]));
					in[(m-2)*n+m-1]=DoubleComplex(scale,zreals(in[(m-2)*n+m-1]) );
				}
				else {
					h = h + f * g;
					g = g / f;
					ort[m-1]=zmuls(DoubleComplex(1+g,0),ort[m-1]);
				}

				/* :::::::::: form (i-(u*ut)/h) * a :::::::::: */
				for (j=m;j<=n;j++){

					fCpx = DoubleComplex(0,0); 

					/* :::::::::: for i=igh step -1 until m do -- :::::::::: */
					for (ii=m;ii<=high;ii++){
						i = mp - ii;
						fCpx = zadds(fCpx, zmuls(zconjs(ort[i-1]),in[(j-1)*n+i-1]));
					}

					fCpx=zrdivs(fCpx,DoubleComplex(h,0));

					for (i=m;i<=high;i++){
						in[(j-1)*n+i-1] = zdiffs(in[(j-1)*n+i-1],zmuls(zconjs(fCpx),ort[i-1]));
					}
				}

				/* :::::::::: form (i-(u*ut)/h)*a*(i-(u*ut)/h) :::::::::: */
				for(i=1;i<=high;i++){
					fCpx = DoubleComplex(0,0); 
					/* :::::::::: for j=igh step -1 until m do -- :::::::::: */
					for (jj=m;jj<=high;jj++){
						j = mp - jj;
						fCpx = zadds(fCpx, zmuls(ort[j-1],in[(j-1)*n+i-1]));
					}
					
					fCpx=zrdivs(fCpx,DoubleComplex(h,0));		

					for (j=m;j<=high;j++){
						in[(j-1)*n+i-1] = zadds(in[(j-1)*n+i-1], zmuls(fCpx,DoubleComplex(-zreals(ort[j-1]),zimags(ort[j-1]))));
					}
				}
				
				ort[m-1] = zmuls(DoubleComplex(scale,0),ort[m-1]);
				in[(m-2)*n+m-1] = zmuls(DoubleComplex(-g,0),in[(m-2)*n+m-1]);
				
					
			}
		}

	
	}
}
