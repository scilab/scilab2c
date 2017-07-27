 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_NANMEAN_H__
#define __INT_NANMEAN_H__

#ifdef  __cplusplus
extern "C" {
#endif


#define d2nanmeand0(in1, size)                            dnanmeana(in1,size[0]* size[1])
#define d2g2nanmeand2(in1, size1, in2, size2, out)        (in2[0]=='r') ? dnanmeanrowa(in1, size1[0], size1[1], out) : dnanmeancola(in1, size1[0] , size1[1], out)

#define s2nanmeans0(in1, size)                            snanmeana(in1,size[0]* size[1])
#define s2g2nanmeans2(in1, size1, in2, size2, out)        (in2[0]=='r') ? snanmeanrowa(in1, size1[0], size1[1], out) : snanmeancola(in1, size1[0] , size1[1], out)

#define z2nanmeanz0(in1, size)                            znanmeana(in1,size[0]* size[1])
#define z2g2nanmeanz2(in1, size1, in2, size2, out)        (in2[0]=='r') ? znanmeanrowa(in1, size1[0], size1[1], out) : znanmeancola(in1, size1[0] , size1[1], out)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_NANMEAN_H__*/
