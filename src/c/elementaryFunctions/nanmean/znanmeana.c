/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "nanmean.h"
#include "doubleComplex.h"
#include "floatComplex.h"


doubleComplex znanmeana(doubleComplex* in, int size)
{
    doubleComplex sum = 0;
    double count = 0;

    for(int i = 0; i<size; i++)
    {
        if(!(isnan(zreals(in[i]))) && !(isnan(zimags(in[i]))))
        {
            count++;
            sum += in[i];
        }
    }

    return sum/count;
}

