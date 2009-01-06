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
  This is a transcription of the fortran subroutine comqr3.f
 */
 
 
 
#include "logm_internal.h" 
#include "sqrt.h"
#include "abs.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "pythag.h"
#include "conj.h"
#include "min.h"


void comqr3(doubleComplex* in, int n, doubleComplex* w, int low, int high, int job, doubleComplex* z){
	/* Variables */
	int i=0, j=0, l=0, ll=0, ip1=0;
	int ierr=0, iend=0, jx=0, jy=0, en=0, itn=0, its=0, enm1=0, lp1=0;
	int boucle_220=0, boucle_240=0;
	double norm;
	doubleComplex s,t,x,y,zz;


	ierr=0;
	jx=job/10;
	jy=job%10;
	/*......... create real subdiagonal elements ..........*/
	iend = high-low-1;
	
	if (iend>=0){
		l=low+1;
		
		for(i=l;i<=high;i++){
			ll=min(i+1,high);
			if (zimags(in[(i-2)*n+i-1])!=0){
				norm = dpythags(zreals(in[(i-2)*n+i-1]),zimags(in[(i-2)*n+i-1]));
				y=zrdivs(in[(i-2)*n+i-1],DoubleComplex(norm,0));
				in[(i-2)*n+i-1]=DoubleComplex(norm,0);
				
				for(j=i;j<=n;j++){
					s=DoubleComplex(0, zimags(zmuls(y,zconjs(in[(j-1)*n+i-1]))));
					in[(j-1)*n+i-1] = DoubleComplex(zreals(zmuls(zconjs(y),in[(j-1)*n+i-1])),zimags(s));
				}
				
				for(j=1;j<=ll;j++){
					s=DoubleComplex(0, zimags(zmuls(zconjs(y),in[(i-1)*n+j-1])));
					in[(i-1)*n+j-1] = DoubleComplex(zreals(zmuls(zconjs(y),in[(i-1)*n+j-1])),zimags(s));
				}
				
				if (jy!=0){
					for (j=low;j<=high;j++){
						s=DoubleComplex(0, zimags(zmuls(y,z[(i-1)*n+j-1])));
						z[(i-1)*n+j-1] = DoubleComplex(zreals(zmuls(y,z[(i-1)*n+j-1])),zimags(s));
					}
				}
			}
		}
	}

	/*.......... store roots isolated by cbal ..........*/
	for(i=1;i<=n;i++){
		if( (i<low) || (i>high) ){
			w[i-1]=in[(i-1)*n+i-1];
		}
	}
	
	en = high;
	t=DoubleComplex(0,0);
	itn = 30*n;
	boucle_220=1;

	/*.......... search for next eigenvalue ..........*/
	while (boucle_220 && (en>=low)){
		its=0;
		enm1= en-1;
		/* .......... look for single small sub-diagonal element
                 for l=en step -1 until low do -- ..........*/
                boucle_240=1;
                while(boucle_240){
                	
			for(ll=low; ll<=en;ll++){
				l = en + low - ll;
		 		if (l!=low){
		 			x = DoubleComplex(dabss(zreals(in[(l-2)*n+l-2])) + dabss(zimags(in[(l-2)*n+l-2])) + dabss(zreals(in[(l-1)*n+l-1])) +dabss(zimags(in[(l-1)*n+l-1])),0);
		 			y = DoubleComplex(zreals(x) + dabss(zreals(in[(l-2)*n+l-1])),0);
		 			if (zreals(x) == zreals(y)) break;
		 		}
		 	}
		 	/*.......... form shift ..........*/
		 	if (l==en) {	
		 		boucle_240=0;
		 		break;
		 	}
		 	if (itn==0) {
		 		boucle_240=0;
		 		break;
		 	}
		 	if ( (its == 10) || (its == 20) ){		 		
		 		/*.......... form exceptional shift ..........*/
		 		s = DoubleComplex(dabss( zreals(in[(enm1-1)*n+en-1]) ) + dabss( zreals(in[(en-3)*n+enm1-1]) ),0);
		 	}
		 	else {
		 		s = in[(en-1)*n+en-1];
		 		
		 		x = zmuls(in[(en-1)*n+enm1-1],DoubleComplex(zreals(in[(enm1-1)*n+en-1]),0));
		 		
		 		if ( (zreals(x)!=0) || (zimags(x)!=0) ){
		 			y=zrdivs(zdiffs(in[(enm1-1)*n+enm1-1],s),DoubleComplex(2,0));
		 			
		 			zz=zsqrts(zadds(zmuls(y,y),x));

		 			if ( (zreals(y)*zreals(zz) + zimags(y)*zimags(zz)) < 0){
		 				zz = DoubleComplex(-zreals(zz),-zimags(zz));
		 			}
		 			zz=zrdivs(x,zadds(y,zz));
		 			s = zdiffs(s,zz);
		 		}
		 	}
		 	
		 	for(i=low;i<=en;i++){
		 		in[(i-1)*n+i-1]=zdiffs(in[(i-1)*n+i-1],s);
		 	}

		 	t = zadds(t,s);
		 	its++;
		 	itn--;
		 	/*.......... reduce to triangle (rows) ..........*/
		 	lp1=l+1;
			 	
		 	for(i=lp1;i<=en;i++){	
		 		s=DoubleComplex(zreals(in[(i-2)*n+i-1]),zimags(s));
		 		norm = dpythags(dpythags(zreals(in[(i-2)*n+i-2]),zimags(in[(i-2)*n+i-2])),zreals(s));
		 		x=zrdivs(in[(i-2)*n+i-2],DoubleComplex(norm,0));
		 		w[i-2]=x;
		 		in[(i-2)*n+i-2]=DoubleComplex(norm, 0);
		 		in[(i-2)*n+i-1]=DoubleComplex(0, zreals(s)/norm);
		 		
		 		for (j=i;j<=n;j++){
		 			y = in[(j-1)*n+i-2];
		 			zz = in[(j-1)*n+i-1];
					in[(j-1)*n+i-2] = zadds(zmuls(zconjs(x),y),zmuls(DoubleComplex(zimags(in[(i-2)*n+i-1]),0),zz));
					in[(j-1)*n+i-1] = zdiffs(zmuls(x,zz),zmuls(DoubleComplex(zimags(in[(i-2)*n+i-1]),0),y));
				}
			}
			/* FIXME  s make sign problem with the exemple */
			s=DoubleComplex(zreals(s),zimags(in[(en-1)*n+en-1]));
			if( zimags(s)!=0){

				norm = dpythags(zreals(in[(en-1)*n+en-1]),zimags(s));
				s = DoubleComplex( zreals(in[(en-1)*n+en-1])/norm , zimags(s)/norm);
			
				in[(en-1)*n+en-1]=DoubleComplex( norm, 0);
				if (en!=n){

					ip1=en+1;
					for(j=ip1;j<=n;j++){
						y=in[(j-1)*n+en-1];
						in[(j-1)*n+en-1]=zmuls(zconjs(s),y);
					}
				}
			}

			/*.......... inverse operation (columns) ..........*/
			for (j=lp1;j<=en;j++){
				x=w[j-2];
				for(i=1;i<=j;i++){
					y=DoubleComplex(zreals(in[(j-2)*n+i-1]),0);
					zz=in[(j-1)*n+i-1];
					if(i!=j){

						y=DoubleComplex(zreals(y), zimags(in[(j-2)*n+i-1]));
						
						in[(j-2)*n+i-1] = DoubleComplex(zreals(in[(j-2)*n+i-1]),
						zreals(x)*zimags(y) + zimags(x)*zreals(y) + zimags(in[(j-2)*n+j-1])*zimags(zz));
					}
					
					in[(j-2)*n+i-1] = DoubleComplex(
					zreals(x)*zreals(y) - zimags(x)*zimags(y) + zimags(in[(j-2)*n+j-1])*zreals(zz),
					zimags(in[(j-2)*n+i-1]));
					
					in[(j-1)*n+i-1] = zdiffs(zmuls(zconjs(x),zz),zmuls(DoubleComplex(zimags(in[(j-2)*n+j-1]),0),y));
				}

         		

				if(jy!=0){
					for(i=low;i<=high;i++){
						y=z[(j-2)*n+i-1];
						zz=z[(j-1)*n+i-1];
						z[(j-2)*n+i-1] = zadds(zmuls(x,y),zmuls(DoubleComplex(zimags(in[(j-2)*n+j-1]),0),zz));
					
						z[(j-1)*n+i-1] = zdiffs(zmuls(zconjs(x),zz),zmuls(DoubleComplex(zimags(in[(j-2)*n+j-1]),0),y));
					}
				}
			}

			if (zimags(s)!=0){
				for (i=1;i<=en;i++){
					y=in[(en-1)*n+i-1];
					in[(en-1)*n+i-1]=zmuls(s,y);
				}

				if(jy!=0){
					for(i=low;i<=high;i++){
						y=z[(en-1)*n+i-1];
						z[(en-1)*n+i-1]=zmuls(s,y);
					}
				}
			}       

		}
	
        
         	if( (l!=en) && (itn==0) ){
         		boucle_220=0;
         		break;
         	}
         	in[(en-1)*n+en-1]=zadds(in[(en-1)*n+en-1],t);
		w[en-1] = in[(en-1)*n+en-1];
		en = enm1;

	}
	
	ierr=en;
}





