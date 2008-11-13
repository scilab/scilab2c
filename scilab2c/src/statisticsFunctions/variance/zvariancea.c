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

doubleComplex	zvariancea(doubleComplex *in, int size)
{
    int i = 0 ;
    
    /*here sumcis used to compensate the possible round off error to a less
     important degree */
    
    doubleComplex sum  = DoubleComplex ( 0 , 0 ) ;
    doubleComplex temp = DoubleComplex ( 0 , 0 ) ; 
    doubleComplex sumc = DoubleComplex ( 0 , 0 ) ;
    doubleComplex variance = DoubleComplex ( 0 , 0 );
    doubleComplex mean =  zmeana ( in , size ) ;
     
    for ( i = 0 ; i < size ; i++)
    {

       temp = zdiffs( in[i] , mean ) ;
       sum  = zadds ( sum , zpows ( temp  , DoubleComplex ( 2, 0) ) );
       sumc = zadds ( sumc , temp ); 
        printf ( "%d r : %e  i : %e\n" , i , zreals(in[i]) , zimags (in[i])); 
    }
    printf ( "\n\n" ) ;
   /*we don't use sumc if equal to 0 otherwise we would have "nan" */
   if ( fabs ( zreals ( sumc)) > 1e-16 || fabs ( zimags ( sumc)) > 1e-16 )
    {
    variance = zpows ( sumc ,DoubleComplex (2 , 0)) ;     
    variance = zdivides ( variance  , DoubleComplex ( size , 0 ) ) ;           
    variance =  zdiffs ( sum , variance );      
    variance = zdivides (variance , DoubleComplex ( (size - 1),0 )); 
    }
   else 
          variance = zdivides (sum , DoubleComplex ( (size - 1),0 ));
  
    return variance ;
}

