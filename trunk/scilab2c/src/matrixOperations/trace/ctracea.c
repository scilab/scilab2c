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

#include "matrixTrace.h"

floatComplex ctracea ( floatComplex* in ,int lines ){
    
    
    int i = 0 ;
    float rout = 0.0f ; 
    float iout = 0.0f ;
    
    for (  i = 0 ; i < lines ; ++i)
    {
        rout += creals (in[i*lines + i] ) ;
        iout += cimags (in[i*lines + i] ) ;
    }
    
    return FloatComplex ( rout , iout ) ;

}


