/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "fft_internal.h"



/*
** radix 4 iteration subroutine
*/
void r4tx( int nthpo, doubleComplex* c0, doubleComplex* c1, doubleComplex* c2, doubleComplex* c3)
{
  int k,kk;
  doubleComplex temp1 , temp2 , temp3 , temp4 ;

  for(k=1;k<=nthpo;k+=4)
    {
      kk = (k-1)*2;  /* real and imag parts alternate */


	temp1 = zadds ( c0[kk] , c2[kk] ) ;
	temp2 = zdiffs( c0[kk] , c2[kk] ) ;
	temp3 = zadds ( c1[kk] , c3[kk] ) ;
	temp4 = zdiffs( c1[kk] , c3[kk] ) ;
/*
      r1 = cr0[kk] + cr2[kk];
      r2 = cr0[kk] - cr2[kk];
      r3 = cr1[kk] + cr3[kk];
      r4 = cr1[kk] - cr3[kk];


      i1 = ci0[kk] + ci2[kk];
      i2 = ci0[kk] - ci2[kk];
      i3 = ci1[kk] + ci3[kk];
      i4 = ci1[kk] - ci3[kk];
*/
	c0[kk] = zadds ( temp1 , temp3 );
	c1[kk] = zdiffs( temp1 , temp3 );

/*
      cr0[kk] = r1 + r3;
      ci0[kk] = i1 + i3;
      cr1[kk] = r1 - r3;
      ci1[kk] = i1 - i3;
*/
	c2[kk] = DoubleComplex ( zreals ( temp2 ) - zimags( temp4 ) , zimags ( temp2 ) + zreals( temp4 ) );
	c3[kk] = DoubleComplex ( zreals ( temp2 ) + zimags( temp4 ) , zimags ( temp2 ) - zreals( temp4 ) );
/*
      cr2[kk] = r2 - i4;
      ci2[kk] = i2 + r4;
      cr3[kk] = r2 + i4;
      ci3[kk] = i2 - r4;
*/
    }
}
