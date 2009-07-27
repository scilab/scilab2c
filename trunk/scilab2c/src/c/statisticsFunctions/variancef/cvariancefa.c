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

floatComplex cvariancefa(floatComplex *in1, int size, floatComplex *in2)

{
  int i = 0 ;
  floatComplex temp = FloatComplex (0.0f, 0.0f );
  floatComplex accumulate =FloatComplex (0.0f, 0.0f );
  float accumulateFre = 0.0f;

  floatComplex meanf = cmeanfa (in1 , size , in2);
  //printf("\n\tComplex meanf result : %lf \t+ %lf i " ,creals( meanf) ,cimags( meanf)) ;
  for(i = 0 ; i < size ; ++i)
    {
     temp = cpows (  cdiffs (in1[i] , meanf ) ,FloatComplex (2.0f, 0.0f ) );
     temp = cmuls( in2[i] , temp);
     //printf("\n\tComplex accumulate : %lf \t+ %lf i   " ,creals(temp) ,cimags(temp)) ;
     accumulate = cadds( temp , accumulate);
     accumulateFre +=  creals(in2[i]);
    }
//printf("\n\tComplex division result : %lf \t+ %lf i / %lf  " ,creals(accumulate) ,cimags(accumulate),accumulateFre) ;
  return FloatComplex( creals(accumulate) /(accumulateFre -1),  cimags(accumulate) /(accumulateFre -1)); 
}
