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

#ifndef __INT_MATRIX_H__
#define __INT_MATRIX_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2d0d0matrixd2(in1, size, in2, in3, out )         dmatrixa(in1, size[0], size[1], in2, in3, out)
#define d2s0s0matrixd2(in1, size, in2, in3, out )         dmatrixa(in1, size[0], size[1], in2, in3, out)
//#define d2u160u160matrixd2(in1, size, in2, in3, out )     dmatrixa(in1, size[0], size[1], in2, in3, out)
//#define d2u80u80matrixd2(in1, size, in2, in3, out )       dmatrixa(in1, size[0], size[1], in2, in3, out)

#define s2d0d0matrixs2(in1, size, in2, in3, out )         smatrixa(in1, size[0], size[1], in2, in3, out)
#define s2s0s0matrixs2(in1, size, in2, in3, out )         smatrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u160u160matrixs2(in1, size, in2, in3, out )     smatrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u80u80matrixs2(in1, size, in2, in3, out )       smatrixa(in1, size[0], size[1], in2, in3, out)

#define u162d0d0matrixu162(in1, size, in2, in3, out )         u16matrixa(in1, size[0], size[1], in2, in3, out)
#define u162s0s0matrixu162(in1, size, in2, in3, out )         u16matrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u160u160matrixs2(in1, size, in2, in3, out )     smatrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u80u80matrixs2(in1, size, in2, in3, out )       smatrixa(in1, size[0], size[1], in2, in3, out)

#define z2d0d0matrixz2(in1, size, in2, in3, out )         zmatrixa(in1, size[0], size[1], in2, in3, out)
#define z2s0s0matrixz2(in1, size, in2, in3, out )         zmatrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u160u160matrixs2(in1, size, in2, in3, out )     smatrixa(in1, size[0], size[1], in2, in3, out)
//#define s2u80u80matrixs2(in1, size, in2, in3, out )       smatrixa(in1, size[0], size[1], in2, in3, out)





#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MATRIX_H__*/
