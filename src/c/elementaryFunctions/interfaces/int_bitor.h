/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_BITOR_H__
#define __INT_BITOR_H__


#define u80u80bitoru80(in1,in2) u8bitors(in1,in2)

#define u82u82bitoru82(in1,size1,in2,size2,out) u8bitora(in1,in2,size1[0]*size1[1],out)

#define u160u160bitoru160(in1,in2) u16bitors(in1,in2)

#define u162u162bitoru162(in1,size1,in2,size2,out) u16bitora(in1,in2,size1[0]*size1[1],out)


#endif 
