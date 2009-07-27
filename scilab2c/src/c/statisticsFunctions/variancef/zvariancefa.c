/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "variancef.h"
#include "division.h"

doubleComplex zvariancefa(doubleComplex *in1, int size, doubleComplex *in2)

{
  int i = 0 ;
  doubleComplex temp = DoubleComplex (0.0, 0.0 );
  doubleComplex accumulate =DoubleComplex (0.0, 0.0 );
  double accumulateFre = 0.0;

  doubleComplex meanf = zmeanfa (in1 , size , in2);
  //printf("\n\tComplex meanf result : %lf \t+ %lf i " ,zreals( meanf) ,zimags( meanf)) ;
  for(i = 0 ; i < size ; ++i)
    {
     temp = zpows (  zdiffs (in1[i] , meanf ) ,DoubleComplex (2.0, 0.0 ) );
     temp = zmuls( in2[i] , temp);
     //printf("\n\tComplex accumulate : %lf \t+ %lf i   " ,zreals(temp) ,zimags(temp)) ;
     accumulate = zadds( temp , accumulate);
     accumulateFre +=  zreals(in2[i]);
    }
//printf("\n\tComplex division result : %lf \t+ %lf i / %lf  " ,zreals(accumulate) ,zimags(accumulate),accumulateFre) ;
  return DoubleComplex( zreals(accumulate) /(accumulateFre -1),  zimags(accumulate) /(accumulateFre -1)); 
}
