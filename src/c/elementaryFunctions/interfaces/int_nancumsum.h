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

#ifndef __INT_NANCUMSUM_H__
#define __INT_NANCUMSUM_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2nancumsumd2(in1, size, out)                             dnancumsuma(in1, size[0]* size[1], out)
#define d2g2nancumsumd2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? dnancumsumrowa(in1, size1[0], size1[1], out) :dnancumsumcola(in1, size1[0], size1[1], out)

#define s2nancumsums2(in1, size, out)                             snancumsuma(in1, size[0]* size[1], out)
#define s2g2nancumsums2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? snancumsumrowa(in1, size1[0], size1[1], out) :snancumsumcola(in1, size1[0], size1[1], out)

#define z2nancumsumz2(in1, size, out)                             znancumsuma(in1, size[0]* size[1],out)
#define z2g2nancumsumz2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? znancumsumrowa(in1, size1[0], size1[1], out) :znancumsumcola(in1, size1[0], size1[1], out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_NANCUMSUM_H__*/
