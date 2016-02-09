/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "diag.h"
void i8diagins(int8 *in, int size,int8 *out)
{

     int i, j;
     for ( i = 0 ; i < size ; i++ )
       {
        for ( j = 0 ; j < size ; j++ )
         {
                if(i==j)
                  {
                     out[(size+1)*i] = in[i] ;  
                    /* Because to replace the diagonal element with input matrix, (_coulmn+1)*i gives the diagonal postion for m*n matrix 
                      i.e if 3*3 matrix then diagonal postion will be 0,4,6 and for 4*4 matrix diagonal postion will be 0,5,10,15 */
                    
                    
                  }
                  
          }
       }

      

}

