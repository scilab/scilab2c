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

#ifndef __INT_MEDIAN_H__
#define __INT_MEDIAN_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2mediand0(in1, size)                             dmediana(in1, size[0]* size[1])
#define d2g2mediand2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? dmedianrowa(in1, size1[0], size1[1], out) :dmediancola(in1, size1[0], size1[1], out)

#define s2medians0(in1, size)                             smediana(in1, size[0]* size[1])
#define s2g2medians2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? smedianrowa(in1, size1[0], size1[1], out) :smediancola(in1, size1[0], size1[1], out)

#define u162medianu160(in1, size)                             u16mediana(in1, size[0]* size[1])
#define u162g2medianu162(in1, size1, in2, size2, out)         (in2[0]== 'r') ? u16medianrowa(in1, size1[0], size1[1], out) :u16mediancola(in1, size1[0], size1[1], out)

#define z2medianz0(in1, size)                             zmediana(in1, size[0]* size[1])
#define z2g2medianz2(in1, size1, in2, size2, out)         (in2[0]== 'r') ? zmedianrowa(in1, size1[0], size1[1], out) :zmediancola(in1, size1[0], size1[1], out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MEDIAN_H__*/
