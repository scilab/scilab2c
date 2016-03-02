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
#include<stdlib.h>  // Used for Absolute value of insert_post
void u8diagina(uint8 *in, int _row,int _column,int insert_post,uint8 *out)
{
     int i, j;
     if(_row == 1)
     {
       _column = _column;

     }
     else
     {
      _column = _row;

     }

      for(i=0;i < ((_column+abs(insert_post))*(_column+abs(insert_post)));i++)
      {
         out[i] = 0; 
  
      }
    
       if(insert_post < 0)
	{
      	for ( j = 0 ; j < _column ; j++ )
         {
                
                 
             
               out[((_column+abs(insert_post))*j)+abs(insert_post)+j] = in[j];   
          }

	}
    else
	{
      	for ( j = insert_post ; j < _column+insert_post ; j++ )
         {
                
                 
            out[((_column+insert_post)*j)-insert_post+j] = in[j-insert_post] ;  
                   
          }
    	}

}

