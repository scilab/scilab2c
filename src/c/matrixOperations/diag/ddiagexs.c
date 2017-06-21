/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "diag.h"
double ddiagexs(double *in, int _row,int _column,int extract_post)
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

