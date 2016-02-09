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


#include "matrixDivision.h"

uint16 u16rdivv(uint16 *in1, uint16 *in2, int size){

  uint16 out[1] = { 0.0} ;
  u16rdivma ( in1,1 ,size ,in2 , 1 , size , out );

 return out[0] ;
}


