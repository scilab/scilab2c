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

floatComplex	cvariancea(floatComplex *in, int size)
{
    int i = 0 ;
    
    /*here sumcis used to compensate the possible round off error to a less
     important degree */
    
    floatComplex sum  = FloatComplex ( 0 , 0 ) ;
    floatComplex temp = FloatComplex ( 0 , 0 ) ; 
    floatComplex sumc = FloatComplex ( 0 , 0 ) ;
    floatComplex variance = FloatComplex ( 0 , 0 );
    floatComplex mean =  cmeana ( in , size ) ;
     
    for ( i = 0 ; i < size ; i++)
    {

       temp = cdiffs( in[i] , mean ) ;
       sum  = cadds ( sum , cpows ( temp  , FloatComplex ( 2.0f, 0) ) );
       sumc = cadds ( sumc , temp ); 
        printf ( "%d r : %e  i : %e\n" , i , creals(in[i]) , cimags (in[i])); 
    }
    printf ( "\n\n" ) ;
   /*we don't use sumc if equal to 0 otherwise we would have "nan" */
   if ( fabs ( creals ( sumc)) > 1e-08 || fabs ( cimags ( sumc)) > 1e-08 )
    {
    variance = cpows ( sumc ,FloatComplex (2.0f , 0)) ;     
    variance = cdivides ( variance  , FloatComplex ((float) size , 0 ) ) ;           
    variance =  cdiffs ( sum , variance );      
    variance = cdivides (variance , FloatComplex ((float) (size - 1),0 )); 
    }
   else 
          variance = cdivides (sum , FloatComplex ((float) (size - 1),0 ));
  
    return variance ;
}

