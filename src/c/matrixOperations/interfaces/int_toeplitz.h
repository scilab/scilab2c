 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_TOEPLITZ_H__
#define __INT_TOEPLITZ_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2d2toeplitzd2(in1,size1,in2,size2,out) dtoeplitza(in1,size1[1],in2,size2[1],out)
#define d2toeplitzd2(in1,size1,out) dtoeplitza(in1,size1[1],in1,size1[1],out)

#define u82u82toeplitzu82(in1,size1,in2,size2,out) u8toeplitza(in1,size1[1],in2,size2[1],out)
#define u82toeplitzu82(in1,size1,out) u8toeplitza(in1,size1[1],in1,size1[1],out)

#define u162u162toeplitzu162(in1,size1,in2,size2,out) u16toeplitza(in1,size1[1],in2,size2[1],out)
#define u162toeplitzu162(in1,size1,out) u16toeplitza(in1,size1[1],in1,size1[1],out)

#define g2g2toeplitzg2(in1,size1,in2,size2,out) gtoeplitza(in1,size1[1],in2,size2[1],out)
#define g2toeplitzg2(in1,size1,out) gtoeplitza(in1,size1[1],in1,size1[1],out)

#define z2z2toeplitzz2(in1,size1,in2,size2,out) ztoeplitza(in1,size1[1],in2,size2[1],out)
#define z2toeplitzz2(in1,size1,out) ztoeplitza(in1,size1[1],in1,size1[1],out)

#define s2s2toeplitzs2(in1,size1,in2,size2,out) stoeplitza(in1,size1[1],in2,size2[1],out)
#define s2toeplitzs2(in1,size1,out) stoeplitza(in1,size1[1],in1,size1[1],out)

#define c2c2toeplitzc2(in1,size1,in2,size2,out) ctoeplitza(in1,size1[1],in2,size2[1],out)
#define c2toeplitzc2(in1,size1,out) ctoeplitza(in1,size1[1],in1,size1[1],out)

#define i82i82toeplitzi82(in1,size1,in2,size2,out) i8toeplitza(in1,size1[1],in2,size2[1],out)
#define i82toeplitzi82(in1,size1,out) i8toeplitza(in1,size1[1],in1,size1[1],out)

#define i162i162toeplitzi162(in1,size1,in2,size2,out) i16toeplitza(in1,size1[1],in2,size2[1],out)
#define i162toeplitzi162(in1,size1,out) i16toeplitza(in1,size1[1],in1,size1[1],out)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_TOEPLITZ_H__*/
