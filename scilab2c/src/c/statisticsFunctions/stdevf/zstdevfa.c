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

#include "stdevf.h" 

doubleComplex zstdevfa(doubleComplex *in1, int lines, int columns, doubleComplex* in2)
{
  int i = 0 ;
  doubleComplex temp = DoubleComplex(0.0,0.0);
  doubleComplex accumulate = DoubleComplex(0.0,0.0);
  double accumulateFre = 0.0 ;
  doubleComplex meanf = zmeanfa (in1 , lines*columns , in2);

  for(i = 0 ; i < lines*columns ; ++i)
    {
     temp = zpows (  zdiffs (in1[i] , meanf ) ,DoubleComplex (2.0, 0.0 ) );
     temp = zmuls( in2[i] , temp);

     accumulate = zadds( temp , accumulate);
     accumulateFre +=  zreals(in2[i]);
    }

    if (lines <= 1)
      {
        return zmuls (DoubleComplex(0.0,0.0) , accumulate ) ; 
      }
    else
      {
        accumulate = DoubleComplex(  zreals(accumulate ) / (accumulateFre - 1) , zimags(accumulate)  / (accumulateFre - 1));
        return zsqrts(accumulate);
      }
}
