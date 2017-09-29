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

#ifndef __INT_NANSUM_H__
#define __INT_NANSUM_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2nansumd0(in1, size)                             dnansuma(in1, size[0]* size[1])
#define d2g2nansumd2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? dnansumrowa(in1, size1[0], size1[1], out) :dnansumcola(in1, size1[0], size1[1], out)

#define s2nansums0(in1, size)                             snansuma(in1, size[0]* size[1])
#define s2g2nansums2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? snansumrowa(in1, size1[0], size1[1], out) :snansumcola(in1, size1[0], size1[1], out)

#define z2nansumz0(in1, size)                             znansuma(in1, size[0]* size[1])
#define z2g2nansumz2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? znansumrowa(in1, size1[0], size1[1], out) :znansumcola(in1, size1[0], size1[1], out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MATRIX_H__*/
