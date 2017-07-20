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

#ifndef __INT_MAD_H__
#define __INT_MAD_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2madd0(in1, size)                             dmada(in1, size[0]* size[1])
#define d2g2madd2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? dmadrowa(in1, size1[0], size1[1], out) :dmadcola(in1, size1[0], size1[1], out)

#define s2mads0(in1, size)                             smada(in1, size[0]* size[1])
#define s2g2mads2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? smadrowa(in1, size1[0], size1[1], out) :smadcola(in1, size1[0], size1[1], out)

#define z2madz0(in1, size)                             zmada(in1, size[0]* size[1])
#define z2g2madz2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? zmadrowa(in1, size1[0], size1[1], out) :zmadcola(in1, size1[0], size1[1], out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MAD_H__*/
