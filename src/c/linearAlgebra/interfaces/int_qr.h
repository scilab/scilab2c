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

#ifndef __INT_QR_H__
#define __INT_QR_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2qrd2d2(in1,size,out1,out2) dqra(1,2,in1,size[0],size[1],0,out1,out2,NULL);
#define d2qrd2d2d2(in1,size,out1,out2,out3) dqra(1,3,in1,size[0],size[1],0,out1,out2,out3);
#define d2g2qrd2d2(in1,size,in2,size1,out1,out2) dqra(2,2,in1,size[0],size[1],0,out1,out2,NULL);
#define d2g2qrd2d2d2(in1,size,in2,size1,out1,out2,out3) dqra(2,3,in1,size[0],size[1],0,out1,out2,out3);
#define d2d0qrd2d2d0d2(in1,size,in2,out1,out2,out3) dqra(2,4,in1,size[0],size[1],in2,out1,out2,out3);
#define d2qrd2d2d0d2(in1,size,out1,out2,out3) dqra(1,4,in1,size[0],size[1],0,out1,out2,out3);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_HESS_H__*/

