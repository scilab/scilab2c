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

#include "eye.h"

void u8eyea(uint8* in, int _iRows, int _iCols)
{
    int i, j  ;

    for ( i = 0 ; i < _iCols ; i++ )
        for ( j = 0 ; j < _iRows ; j++ )
                in[i*_iRows + j] =  (i == j)?(uint8)1:(uint8)0  ;
}

