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

#ifndef __INT_GIVENS_H__
#define __INT_GIVENS_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2givensd2(in1,size,out1) dgivensa(1,in1,size[0],size[1],NULL,0,0,1,out1,NULL);
#define d2givensd2d2(in1,size,out1,out2) dgivensa(1,in1,size[0],size[1],NULL,0,0,2,out1,out2);

#define d0d0givensd2d2(in1,in2,out1,out2) dgivensa(2,&in1,1,1,&in2,1,1,2,out1,out2);
#define d0d0givensd2(in1,out1) dgivensa(2,&in1,1,1,&in2,1,1,1,out1,NULL);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_GIVENS_H__*/

