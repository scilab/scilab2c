 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __INT_SVD_H__
#define __INT_SVD_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2svdd2(in1,size1,out1) dsvda(0,in1,size1[0],size1[1],0,1,out1,NULL,NULL)
#define d2g2svdd2d2d2(in1,size1,in2,size2,out1,out2,out3) dsvda(0,in1,size1[0],size1[1],1,3,out1,out2,out3);
#define d2svdd2d2d2(in1,size1,out1,out2,out3) dsvda(0,in1,size1[0],size1[1],0,3,out1,out2,out3);

#define d2svdd2d2d2d0(in1,size1,out1,out2,out3) dsvda(0,in1,size1[0],size1[1],0,4,out1,out2,out3);
#define d2d0svdd2d2d2d0(in1,size1,tol,out1,out2,out3) dsvda(tol,in1,size1[0],size1[1],0,4,out1,out2,out3);

#define z2svdz2(in1,size1,out2) zsvda(in1,size1[0],size1[1],0,1,NULL,out2,NULL);
#define z2g2svdz2z2z2(in1,size1,in2,size2,out1,out2,out3) zsvda(in1,size1[0],size1[1],1,3,out1,out2,out3);
#define z2svdz2z2z2(in1,size1,out1,out2,out3) zsvda(in1,size1[0],size1[1],0,3,out1,out2,out3);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_SVD_H__*/
