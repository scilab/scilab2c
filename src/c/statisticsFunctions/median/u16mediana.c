/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "median.h"
#include "types.h"
#include "uint16.h"

uint16 u16mediana(uint16 *in, int size)
{
    uint16 a; uint16 fin;


    for (int i = 0; i < size; ++i)

    {

        for (int j = i + 1; j < size; ++j)

        {

            if (in[i] > in[j])

            {

                a =  in[i];

                in[i] = in[j];

                in[j] = a;

            }

        }

    }

 if(size%2 ==0)
    {
     fin= (in[size/2]+ in[(size/2)-1])/2;
    }
 else
    {
    fin= in[(size-1)/2];
    }

    return fin;
}
