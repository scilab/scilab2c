/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "find2d.h"

void dfind2da(double* x, int rows, int columns, double* out1, double* out2, int max) {
    int i = 0, j=0, k = 0;

    /* if out are empties */
    out1[0]=-1;
    out2[0]=-1;

    for	(j = 0; j < columns ; ++j)
    {
        for (i = 0; i < rows ; ++i)
        {
            /*to avoid useless search if we only want to find the  max first founded value   */
            if (max == 0)
            {
                return;
            }

            if (x[j*rows+i] != 0)
            {
                out1[k] = (double)(i+1);
                out2[k] = (double)(j+1);
                k++;
            }
        }
    }
}
