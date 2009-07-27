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

#include "meanf.h"
#include "multiplication.h"


floatComplex cmeanfa(floatComplex *in1, int size, floatComplex *in2 ) {
  floatComplex accumulate = FloatComplex(0.0f, 0.0f);
  float freAccumulate =  0.0f;
  int i = 0;

  for (i = 0; i < size; ++i)
    {
      accumulate = cadds(accumulate, cmuls (in1[i] , in2[i]));
      freAccumulate +=  creals(in2[i]);
    }
  return FloatComplex(creals(accumulate) /freAccumulate, cimags(accumulate) /freAccumulate);
}


/*
  for (i = 0; i < size; ++i)
    {
      accumulate += (in1[i] * in2[i]) ;
      freAccumulate += in2[i] ;
    }
  return accumulate / freAccumulate;


*/
