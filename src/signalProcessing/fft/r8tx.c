


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
#include <math.h>
#include <stdio.h>



/*
** radix 8 iteration subroutine
*/
void r8tx ( int nxtlt,int nthpo,int lengt,
            doubleComplex* cc0,doubleComplex* cc1,doubleComplex* cc2,doubleComplex* cc3,
            doubleComplex* cc4,doubleComplex* cc5,doubleComplex* cc6,doubleComplex* cc7)

{


  int j,k,kk;
  double dblP7  = 1 / sqrt (2) ;
  double dblPi2 = 8 * atan (1);

  double scale, arg;
  double c1,c2,c3,c4,c5,c6,c7;
  double s1,s2,s3,s4,s5,s6,s7;

  doubleComplex Atemp0,Atemp1,Atemp2,Atemp3,Atemp4,Atemp5,Atemp6,Atemp7;
  doubleComplex Btemp0,Btemp1,Btemp2,Btemp3,Btemp4,Btemp5,Btemp6,Btemp7;

  doubleComplex temp ;

/*
  double *cr0,*cr1,*cr2,*cr3,*cr4,*cr5,*cr6,*cr7;
  double *ci0,*ci1,*ci2,*ci3,*ci4,*ci5,*ci6,*ci7;

  cr0 = &(cc0[0].re);
  cr1 = &(cc1[0].re);
  cr2 = &(cc2[0].re);
  cr3 = &(cc3[0].re);
  cr4 = &(cc4[0].re);
  cr5 = &(cc5[0].re);
  cr6 = &(cc6[0].re);
  cr7 = &(cc7[0].re);

  ci0 = &(cc0[0].im);
  ci1 = &(cc1[0].im);
  ci2 = &(cc2[0].im);
  ci3 = &(cc3[0].im);
  ci4 = &(cc4[0].im);
  ci5 = &(cc5[0].im);
  ci6 = &(cc6[0].im);
  ci7 = &(cc7[0].im);
*/

  scale = dblPi2/lengt;

  for(j=1;j<=nxtlt;j++)
    {
      arg = (j-1)*scale;
      c1 = cos(arg);
      s1 = sin(arg);
      c2 = c1*c1 - s1*s1;
      s2 = c1*s1 + c1*s1;
      c3 = c1*c2 - s1*s2;
      s3 = c2*s1 + s2*c1;
      c4 = c2*c2 - s2*s2;
      s4 = c2*s2 + c2*s2;
      c5 = c2*c3 - s2*s3;
      s5 = c3*s2 + s3*c2;
      c6 = c3*c3 - s3*s3;
      s6 = c3*s3 + c3*s3;
      c7 = c3*c4 - s3*s4;
      s7 = c4*s3 + s4*c3;

      for(k=j;k<=nthpo;k+=lengt)
	{
	  kk = (k-1)*2; /* index by twos; re & im alternate */

		Atemp0 =  zadds ( cc0[kk] , cc4[kk] ) ;
		Atemp1 =  zadds ( cc1[kk] , cc5[kk] ) ;
		Atemp2 =  zadds ( cc2[kk] , cc6[kk] ) ;
		Atemp3 =  zadds ( cc3[kk] , cc7[kk] ) ;

/*
	  ar0 = cr0[kk] + cr4[kk];
	  ar1 = cr1[kk] + cr5[kk];
	  ar2 = cr2[kk] + cr6[kk];
	  ar3 = cr3[kk] + cr7[kk];


	  ai0 = ci0[kk] + ci4[kk];
	  ai1 = ci1[kk] + ci5[kk];
	  ai2 = ci2[kk] + ci6[kk];
	  ai3 = ci3[kk] + ci7[kk];
*/

		Atemp4 =  zdiffs ( cc0[kk] , cc4[kk] ) ;
		Atemp5 =  zdiffs ( cc1[kk] , cc5[kk] ) ;
		Atemp6 =  zdiffs ( cc2[kk] , cc6[kk] ) ;
		Atemp7 =  zdiffs ( cc3[kk] , cc7[kk] ) ;
/*
	  ar4 = cr0[kk] - cr4[kk];
	  ar5 = cr1[kk] - cr5[kk];
	  ar6 = cr2[kk] - cr6[kk];
	  ar7 = cr3[kk] - cr7[kk];

	  ai4 = ci0[kk] - ci4[kk];
	  ai5 = ci1[kk] - ci5[kk];
	  ai6 = ci2[kk] - ci6[kk];
	  ai7 = ci3[kk] - ci7[kk];
*/



		Btemp0 =  zadds  ( Atemp0 , Atemp2 ) ;
		Btemp1 =  zadds  ( Atemp1 , Atemp3 ) ;
		Btemp2 =  zdiffs ( Atemp0 , Atemp2 ) ;
		Btemp3 =  zdiffs ( Atemp1 , Atemp3 ) ;

/*
	  br0 = ar0 + ar2;
	  br1 = ar1 + ar3;
	  br2 = ar0 - ar2;
	  br3 = ar1 - ar3;

	  bi0 = ai0 + ai2;
	  bi1 = ai1 + ai3;
	  bi2 = ai0 - ai2;
	  bi3 = ai1 - ai3;
*/

	Btemp4 = DoubleComplex ( zreals ( Atemp4 ) - zimags( Atemp6 ) , zimags ( Atemp4 ) + zreals( Atemp6 ) );
	Btemp5 = DoubleComplex ( zreals ( Atemp5 ) - zimags( Atemp7 ) , zimags ( Atemp5 ) + zreals( Atemp7 ) );
	Btemp6 = DoubleComplex ( zreals ( Atemp4 ) + zimags( Atemp6 ) , zimags ( Atemp4 ) - zreals( Atemp6 ) );
	Btemp7 = DoubleComplex ( zreals ( Atemp5 ) + zimags( Atemp7 ) , zimags ( Atemp5 ) - zreals( Atemp7 ) );
/*
	  br4 = ar4 - ai6;
	  br5 = ar5 - ai7;
	  br6 = ar4 + ai6;
	  br7 = ar5 + ai7;

	  bi4 = ai4 + ar6;
	  bi5 = ai5 + ar7;
	  bi6 = ai4 - ar6;
	  bi7 = ai5 - ar7;
*/
	cc0[kk] = zadds ( Btemp0 , Btemp1 );
/*
	  cr0[kk] = br0 + br1;
	  ci0[kk] = bi0 + bi1;
*/




	  if(j>1)
	    {
 printf ( "on  sup j>1\n");
		cc1[kk] = DoubleComplex ( 	c4 * (zreals(Btemp0) - zreals(Btemp1)) - s4 * (zimags(Btemp0) - zimags(Btemp1)),
                                    c4 * (zimags(Btemp0) - zimags(Btemp1)) + s4 * (zreals(Btemp0) - zreals(Btemp1)));

		cc2[kk] = DoubleComplex ( 	c2 *  (zreals(Btemp2) - zimags(Btemp3)) - s2 * (zimags(Btemp2) + zreals(Btemp3)) ,
                                    c2 *  (zimags(Btemp2) + zreals(Btemp3)) + s2 * (zreals(Btemp2) - zimags(Btemp3)));

		cc3[kk] = DoubleComplex ( 	c6 * (zreals(Btemp2)  + zimags(Btemp3)) - s6 * (zimags(Btemp2) - zreals(Btemp3)) ,
                                    c6 * (zimags(Btemp2)  - zreals(Btemp3)) + s6 * (zreals(Btemp2) + zimags(Btemp3)));

/*
	      cr1[kk] = c4*(br0-br1) - s4*(bi0-bi1);
          ci1[kk] = c4*(bi0-bi1) + s4*(br0-br1);

	      cr2[kk] = c2*(br2-bi3) - s2*(bi2+br3);
	      ci2[kk] = c2*(bi2+br3) + s2*(br2-bi3);

	      cr3[kk] = c6*(br2+bi3) - s6*(bi2-br3);
	      ci3[kk] = c6*(bi2-br3) + s6*(br2+bi3);
*/

            temp = DoubleComplex ( 	dblP7*(zreals ( Btemp5 ) - zimags( Btemp5 )) ,
                                    dblP7*(zreals ( Btemp5 ) + zimags( Btemp5 )) );
/*
	      tr = dblP7*(br5-bi5);
	      ti = dblP7*(br5+bi5);
*/

		cc4[kk] = DoubleComplex ( 	c1 * (zreals (Btemp4) + zreals(temp)) - s1 * (zimags (Btemp4) + zimags(temp)) ,
                                    c1 * (zimags (Btemp4) + zimags(temp)) + s1 * (zreals (Btemp4) + zreals(temp)));
		cc5[kk] = DoubleComplex ( 	c5 * (zreals (Btemp4) - zreals(temp)) - s5 * (zimags (Btemp4) - zimags(temp)) ,
                                    c5 * (zimags (Btemp4) - zimags(temp)) + s5 * (zreals (Btemp4) - zreals(temp)));

/*
	      cr4[kk] = c1*(br4+tr) - s1*(bi4+ti);
	      ci4[kk] = c1*(bi4+ti) + s1*(br4+tr);
	      cr5[kk] = c5*(br4-tr) - s5*(bi4-ti);
	      ci5[kk] = c5*(bi4-ti) + s5*(br4-tr);
*/
            temp = DoubleComplex ( - dblP7*(zreals ( Btemp7 ) + zimags( Btemp7 )) ,
                                     dblP7*(zreals ( Btemp7 ) - zimags( Btemp7 )) );
/*
	      tr = -dblP7*(br7+bi7);
	      ti =  dblP7*(br7-bi7);
*/
		cc6[kk] = DoubleComplex ( 	c3 * (zreals (Btemp6) + zreals(temp)) - s3 * (zimags (Btemp6) + zimags(temp)) ,
                                    c3 * (zimags (Btemp6) + zimags(temp)) + s3 * (zreals (Btemp6) + zreals(temp)));
		cc7[kk] = DoubleComplex ( 	c7 * (zreals (Btemp6) - zreals(temp)) - s7 * (zimags (Btemp6) - zimags(temp)) ,
                                    c7 * (zimags (Btemp6) - zimags(temp)) + s7 * (zreals (Btemp6) - zreals(temp)));
/*
	      cr6[kk] = c3*(br6+tr) - s3*(bi6+ti);
	      ci6[kk] = c3*(bi6+ti) + s3*(br6+tr);
	      cr7[kk] = c7*(br6-tr) - s7*(bi6-ti);
	      ci7[kk] = c7*(bi6-ti) + s7*(br6-tr);
*/
	    }
    else
        {
             printf ( "on oupa sup j>1\n");
            cc1[kk] = zdiffs ( Btemp0 , Btemp1 );
    /*
              cr1[kk] = br0 - br1;
              ci1[kk] = bi0 - bi1;
    */

            cc2[kk] = DoubleComplex ( zreals ( Btemp2 ) - zimags( Btemp3 ) ,
                                      zimags ( Btemp2 ) + zreals( Btemp3 ) );


            cc3[kk] = DoubleComplex ( zreals ( Btemp2 ) + zimags( Btemp3 ) ,
                                      zimags ( Btemp2 ) - zreals( Btemp3 ) );

    /*
              cr2[kk] = br2 - bi3;
              cr3[kk] = br2 + bi3;

              ci2[kk] = bi2 + br3;
              ci3[kk] = bi2 - br3;
    */

            temp = DoubleComplex ( 	dblP7*(zreals ( Btemp5 ) - zimags( Btemp5 )) ,
                                    dblP7*(zreals ( Btemp5 ) + zimags( Btemp5 )) );
    /*
              tr = dblP7*(br5-bi5);
              ti = dblP7*(br5+bi5);
    */
            cc4[kk] = zadds  ( Btemp4 , temp );
            cc5[kk] = zdiffs ( Btemp4 , temp );
    /*
              cr4[kk] = br4 + tr;
              ci4[kk] = bi4 + ti;
              cr5[kk] = br4 - tr;
              ci5[kk] = bi4 - ti;
    */
            temp = DoubleComplex ( - dblP7*(zreals ( Btemp7 ) + zimags( Btemp7 )) ,
                                     dblP7*(zreals ( Btemp7 ) - zimags( Btemp7 )) );
    /*
              tr = -dblP7*(br7+bi7);
              ti =  dblP7*(br7-bi7);
    */
            cc6[kk] = zadds  ( Btemp6 , temp );
            cc7[kk] = zdiffs ( Btemp6 , temp );
    /*
              cr6[kk] = br6 + tr;
              ci6[kk] = bi6 + ti;
              cr7[kk] = br6 - tr;
              ci7[kk] = bi6 - ti;
    */






        }

	}
    }

    printf ( "plop %d \t%e \t%e\n" , 0 , zreals(cc0[kk]) , zimags(cc0[kk]));
    printf ( "plop %d \t%e \t%e\n" , 1 , zreals(cc1[kk]) , zimags(cc1[kk]));
    printf ( "plop %d \t%e \t%e\n" , 2 , zreals(cc2[kk]) , zimags(cc2[kk]));
    printf ( "plop %d \t%e \t%e\n" , 3 , zreals(cc3[kk]) , zimags(cc3[kk]));
    printf ( "plop %d \t%e \t%e\n" , 4 , zreals(cc4[kk]) , zimags(cc4[kk]));
    printf ( "plop %d \t%e \t%e\n" , 5 , zreals(cc5[kk]) , zimags(cc5[kk]));
    printf ( "plop %d \t%e \t%e\n" , 6 , zreals(cc6[kk]) , zimags(cc6[kk]));
    printf ( "plop %d \t%e \t%e\n" , 7 , zreals(cc7[kk]) , zimags(cc7[kk]));
}
