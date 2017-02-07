 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_LQE_H__
#define __INT_LQE_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define ss2lqed2d2(in1,size1,out1,out2) dlqea(in1,size1[0],size1[1],out1,out2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_LQE_H__*/
