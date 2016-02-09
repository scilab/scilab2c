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
int16 i16diagexs(int16 *in, int _row,int _column,int extract_post)
{
    
    if(_row == _column) 
    {
    
     if(extract_post < 0)
	{
      	        
            return in[_row-1] ;  
        }
    else
	{         
           
           return in[(_row)*(_row-1)] ;  
                   
        }
    }
     
   else 
    {

       if(extract_post < 0)
        {

            return in[_row-1];

       }
       else
       {
          return in[(_row)*(_column-1)];

       }



    }
  
}

