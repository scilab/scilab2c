/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "matrixTrace.h"

uint16 u16tracea ( uint16* in ,int lines){
    
    
    int i = 0 ;
    //double out  = 0 ;
    uint16 out = 0;
    
    for (  i = 0 ; i < lines ; ++i)
        out += (uint16)in[i*lines + i] ;
    
    return out;
}


