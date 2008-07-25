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

#include "variance.h" 

float	svariancea(float *in, int size)
{
    int i = 0 ;
    
    float temp = 0 ;
    float sumc = 0 ;
    float variance = 0;
    
    float mean =  smeana ( in , size );
 
    for ( i = 0 ; i < size ; i++)
    { 

       temp += spows (  (in[i]  - mean ) ,2.0f ) ;
       sumc += (in[i]  - mean);     
    }
    
    if ( fabs ( sumc) > 1e-08)
        variance = (float) ( temp - spows( sumc,2.0f)/(float)size)/(float) ( size -1);
    else 
        variance = (float) ( temp )/(float) ( size -1);    
    
    return variance ;
}
