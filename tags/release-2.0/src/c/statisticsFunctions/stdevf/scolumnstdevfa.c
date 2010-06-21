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
#include "meanf.h"


void scolumnstdevfa(float *in1, int lines, int columns, float *in2, float* out){
  int i = 0;
  int j = 0;
  float temp = 0.0f;
  float accumulate = 0.0f;
  float accumulateFre = 0.0f ;
    
  scolumnmeanfa(in1, lines, columns, in2, out );

  
  /*we first multiply each cell of the input matrix by its coefficient*/
  for (j = 0; j < lines; ++j)
    {
      accumulate = 0.0f;
      accumulateFre= 0.0f;
      temp = 0.0f;

      for ( i = 0 ; i < columns; ++i )
        {
         temp = spows (  (in1[lines*i + j]  - out[j] ) ,2 );
         temp *= in2[lines*i + j];

         accumulate += temp ;
         accumulateFre += in2[lines*i + j];
        } 

      if (lines <= 1)
       {
        out[j] =  0.0f * accumulate ; 
       }
      else
       {
        out[j] = ssqrts(accumulate / (accumulateFre - 1));
       }
    }

}
/*
                               
                                                               !
!  elseif o == 'c' | o == 2 then                                                                    !
!    // here ones is used becaue we work on  matrix , but in C we work on element so we only need iteratation                                                                                               !
!    y = x - meanf(x, fre, o) * ones(1, size(x, o))                                                 !
!                                                                                                   !

!  if size(x, 1) == 1 then                                                                          !                                                                                              !
!    s = 0 * sum(y.^2 .* fre, o)                                                                                                                                                                 !
!  else                                                                                             !                                                                                               !
!    s = sqrt(sum(y.^2 .* fre, o) ./ (sum(fre, o) - 1));                                            !
                                                                                      !
*/ 

