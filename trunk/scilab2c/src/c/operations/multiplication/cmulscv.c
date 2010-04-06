/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2009 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */


#include <stdlib.h>
#include "zeros.h"
#include "multiplication.h"

floatComplex cmulscv (float* in1, floatComplex* in2, int size)
  {
    float* ZEROS = (float *) malloc((unsigned int)(size*sizeof(float)));
    szerosa(ZEROS,size  , 1);
    
    return cmulv(FloatComplexMatrix(in1,ZEROS,size), in2 , size );
  }
