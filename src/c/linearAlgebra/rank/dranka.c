/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*Funtion to find inverse condition number of square matrix*/

#include "lapack.h"
#include "stdlib.h"
#include "string.h"
#include "rank.h"
#include "svd.h"

double dranka(double* in1, int rows, int cols)
{
 double out1[rows*rows];
 double out2[rows*cols];
 double out3[cols*cols];
 double rk;


	rk = dsvda(0,in1,rows,cols, 0, 4, out1, out2, out3);


 return rk;

}
