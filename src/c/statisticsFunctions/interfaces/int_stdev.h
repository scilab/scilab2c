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

#ifndef __INT_STDEV_H__
#define __INT_STDEV_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2stdevd0(in1, size)                             dstdeva(in1, size[0]* size[1])
#define d2g2stdevd2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? dstdevrowa(in1, size1[0], size1[1], out) :dstdevcola(in1, size1[0], size1[1], out)

#define s2stdevs0(in1, size)                             sstdeva(in1, size[0]* size[1])
#define s2g2stdevs2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? sstdevrowa(in1, size1[0], size1[1], out) :sstdevcola(in1, size1[0], size1[1], out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_STDEV_H__*/
