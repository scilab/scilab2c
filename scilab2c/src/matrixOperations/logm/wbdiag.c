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

#include "logm_internal.h"
#include "pow.h"
#include "abs.h"
#include "addition.h"
#include "subtraction.h"
#include <malloc.h>
#include <stdio.h>

void wbdiag( doubleComplex* in, int size, doubleComplex* out){
	double norm=0, rav, cav,c,d;
	int  i=0, j=0, ok=0, l1=0, l11pi=0,k,l, *bs, fail;
	int l11=0, l22=0, l22m1=0, da22=0, da11=0, one=1, mone, km1;
	int job=0; /* It seems job is always zero for a call with a complex matrix. It must be confirmed.
		      If it's true, we could remove some parts of the code that use j<>0 */
	int low=0, high=0;
	double* scale;
	doubleComplex *eigenvalue, *x, *y, temp;
	int boucle_50, boucle_60, boucle_110, boucle_420, boucle_460, boucle_520, boucle_560;

	
	scale = malloc((uint)size*sizeof(double));	
	eigenvalue = malloc((uint)size*sizeof(doubleComplex));	
	x = malloc((uint)size*sizeof(doubleComplex));	
	y = malloc((uint)size*sizeof(doubleComplex));	
	bs = malloc((uint)size*sizeof(int));	
	
	
	/* Compute l1 norm of in */
	for (i=0;i<size*size;i++){
		norm += (zreals(in[i])+zimags(in[i]));
	}


	/* convert a to upper hessenberg form */
	cbal(in, size, &low, &high, scale);
	corth(in, size, 1, size, eigenvalue);
	cortr(in, size, 1, size, eigenvalue, x);


	/* convert a to upper triangular form by qr method */
	comqr3(in, size, eigenvalue, 1, size, 11, x);

	/*  reduce a to block diagonal form

	    segment a into 4 matrices: a11, a 1 x 1 block
	    whose (1,1)-element is at a(l11,l11))  a22, a 1 x 1
	    block whose (1,1)-element is at a(l22,l22)) a12,
	    a 1 x 1 block whose (1,1)-element is at a(l11,l22))
	    and a21, a 1 x 1 block = 0 whose (1,1)-
	    element is at a(l22,l11).



	    this loop uses l11 as loop index and splits off a block
	    starting at a(l11,l11). */

	l11=1;      

	while(l11<=size){/* debut boucle_40 */
		l22=l11;    
		/*  this loop uses da11 as loop variable and attempts to split
		    c       off a block of size da11 starting at a(l11,l11) */
		while (boucle_50){
			if (l22!=l11) boucle_60=1;
			else {
				da11 = 1;
				l22 = l11 + 1;
				l22m1 = l22 - 1;
				boucle_60=0;
			}
			if (boucle_60==1){     
				/*   compute the average of the eigenvalues in a11 */
				rav = 0;
				cav = 0;
				for (i=l11;i<l22m1;i++){
					rav = rav + zreals(eigenvalue[i]);
					cav = cav + dabss(zimags(eigenvalue[i]));
				}

				rav = rav/da11;
				cav = cav/da11;
				/*   loop on eigenvalues of a22 to find the one closest to the av */
				d = dpows(rav-zreals(eigenvalue[l22-1]),2) + dpows(cav-zimags(eigenvalue[l22-1]),2);
				k = l22;
				l = l22  + 1;

				if(l<size){
					c = dpows(rav-zreals(eigenvalue[l-1]),2) + dpows(cav-zimags(eigenvalue[l-1]),2);
					if (c < d){
						k = l;
						d = c;
					}
					l = l  + 1;
				}

				/*  loop to move the eigenvalue just located
				    into first position of block a22.
				    the block we're moving to add to a11 is a 1 x 1  */
				boucle_110=1;
				while (boucle_110){
					if (k==l22) boucle_110=0;
					else{
						km1 = k - 1;
						wexchn();
						temp = eigenvalue[k-1];
						eigenvalue[k-1] = eigenvalue[km1-1];
						eigenvalue[km1-1] = temp;
						k = km1;

						if (k<=l22) boucle_110=0;
					}
				}
				da11 = da11 + 1;
				l22 = l11 + da11;
				l22m1 = l22 - 1;
			} 
			if (l22>=size) boucle_50=0;
			else  {
				/*  attempt to split off a block of size da11. */
				da22 = size - l22 + 1;

				/*  save a12 in its transpose form in block a21. */
				for (j=l11;j<l22m1;j++){
					for (i=l22;i<size;i++){
						in[(i-1)*size+j]=in[(j-1)*size+i];
					}
				}
				/*       convert a11 to lower quasi-triangular and multiply it by -1 and
					 c       a12 appropriately (for solving -a11*p+p*a22=a12).

					 c      write(6,'(''da11='',i2,''da22='',i2)') da11,da22
					 c      write(6,'(''a'')')
					 c      call wmdsp(ar,ai,n,n,n,10,1,80,6,cw,iw)
					 */

				dad(in, size, l11, l22m1, l11, size, one, 0);
				dad(in, size, l11, l22m1, l11, l22m1, mone, 1);

				/*  solve -a11*p + p*a22 = a12. */
				wshrsl();
				if (ok) boucle_50=0;
				else {
					/*  change a11 back to upper quasi-triangular. */
					dad(in, size, l11, l22m1, l11, l22m1, one, 1);
					dad(in, size, l11, l22m1, l11, l22m1, mone, 0);

					/*  move saved a12 back into its correct position. */
					for (j=l11;j<l22m1;j++){
						for(i=l22;i<size;i++){
							in[(j-1)*size+i-1] = in[(i-1)*size+j-1];	
							in[(i-1)*size+j-1] = DoubleComplex(0,0);
						}

					}
				}

			}
		}/*boucle_50*/
		/* change solution to p to proper form */
		if (l22<=size){
			dad(in,size,l11,l22m1,l11,size,one,0);
			dad(in,size,l11,l22m1,l11,l22m1,mone,1);
		}
		bs[l11-1]=da11;
		j=da11-1;
		if (j!=0){
			for(i=1;i<=j;i++){
				l11pi=l1+i;
				bs[l11pi-1]=-(da11-i);		
			}
			l11=l22;		
		}/* boucle_40 */


		fail=1;
		/*
		   set transformations matrices as required 
		   if (job == 3) return;

		   compute inverse tranformation 
		   if (job ==1){
		   for (i=0;i<size;i++){
		   for(j=0;j<size;j++){
		   y[i*size+j-1]=x[j*size+i-1];
		   }
		   }

		   l22=1;
		   boucle_420=1;
		   while (boucle_420){
		   l11=l22;
		   l22=l11+bs[l11-1];
		   if (l22>size) {
		   boucle_420=0;
		   break;
		   }
		   l22m1=l22-1;

		   for (i=l11;i<=l22m1;i++){
		   for(j=1;j<=size;j++){
		   y[i*size+j-1]=zadds(zdiffs(y[i*size+j-1],ddot()),ddot());
		   }
		   }
		   }

		   if (high<>low){
		   for (j=low;j<=high;j++){
		   temp=1/scale[j-1];
		   for(i=1;i<=size;i++){
		   y[i*size+j-1]=y[i*size+j-1]*temp;
		   }
		   }
		   }

		   for (ii=1;ii<+size;i++){
		   i=ii;
		   if ( (i<low) || (i>high) ){
		   if (i<low) i=low-ii;
		   k=scale[i-1];
		   if (k<>i){
		   for (j=1;j<=size;j++){
		   temp=y[j*size+i-1];
		   y[j*size+i-1] = y[j*size+k-1];
		   y[j*size+k-1] = temp;
		   }
		   }
		   }
		   }
		   }
		   */	
		if (job!=2){
			/* Compute right transformation */
			l22=1;
			boucle_460=1;
			while(boucle_460){
				l11=l22;
				l22=l11+bs[l11-1];
				if (l22>size) {
					boucle_420=0;
					break;
				}

				for (j=l22;j<=size;j++){
					for(i=1;i<=size;i++){
						x[i*size+j-1]=zadds(zdiffs(x[i*size+j-1],ddot()),ddot());
					}
				}
			}
			balbak();
		}

		/* extract non orthogonal transformation from in */
		for (j=1;j<size;j++){
			dset();
		}

		dset();
		l22=1;
		boucle_520=1;
		while(boucle_520){
			l11=l22;
			if(l11>size) {
				boucle_520=0;
				break;
			}
			l22=l11+bs[l11-1];
			for (j=l22;j<=size;j++){
				for (i=1;i<=size;i++){
					y[i*size+j-1]=zdiffs(zadds(y[i*size+j-1],ddot()),ddot());
				}
			}
		}
	}

	/* set zeros in the matrix in */
	l11=1;
	boucle_560=1;
	while (boucle_560){
		l22=l11+bs[l11-1];
		if (l22>size){
			boucle_560=0;
			break;
		}
		l22m1=l22-1;

		for(j=l11;j<=l22m1;j++){
			dset();
			dset();
		}
		l11=l22;
	}
	out=in;

}
