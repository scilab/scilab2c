/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 rganization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "diag.h"
void u16diagexa(uint16 *in, int _row,int _column,int extract_post,uint16 *out)
{
     
    
    int  j;
    if(_row == _column)
     {
         if(extract_post <= 0)
	   {
      	     for ( j = 0 ; j < _column ; j++ )
               {
                
                 
                  out[j] = in[((_column+1)*j)-extract_post] ;  
                   
               }  
           }
         else
	    {
      	       for ( j = extract_post ; j < _column ; j++ )
                  {
                
                 
                   out[j-extract_post] = in[((_column+1)*j)-extract_post] ;  
                   
                 }
    	     }  

     } 
     else if(_row > _column)
     {

        if(extract_post >=0)
          {
       
             for(j = extract_post; j < _column;j++)
               {

                   out[j-extract_post] = in[((_row+1)*j)-extract_post];
               }
             

          }
        else
          {
                
              if((abs(extract_post) <= (_row - _column)))
                {
                   for(j = 0; j < _column ; j++)  
                      {
                         out[j] = in[((_row+1)*j)-extract_post];
                      
                      }
                }
               else
                 {

                     for(j=0; j < (_row + extract_post);j++) 
                       {

                            out[j] = in[((_row+1)*j)-extract_post];
             
                       }
                                    


                 }

          }

      }
     else if (_row < _column)
      {
        
        if(extract_post > 0)
         {
             if((extract_post <= (_column - _row)))
              {
                for(j=extract_post;j < _column;j++) 
                 {
                      out[j-extract_post] = in[((_row+1)*j)-extract_post]; 
                 }
                  
              }
            else
               {
                 for(j=extract_post;j < _column;j++) 
                  {
                      out[j-extract_post] = in[((_row+1)*j)-extract_post]; 
                  }

              }  

         }   
         else
            {
              
                 
                 for(j=0;j < (_row+extract_post);j++)
                    {

                        out[j] =  in[((_row+1)*j)-extract_post];            



                    }



            }
       
       
      }
         

}

