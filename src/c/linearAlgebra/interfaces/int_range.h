 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_RANGE_H__
#define __INT_RANGE_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2d0ranged2d0(in1,size1,in2,out1) 		drangea(in1,size1[0],size1[1],in2,out1)
#define d2ranged2d0(in1,size1,out1)	 		drangea(in1,size1[0],size1[1], 1,out1)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_RANGE_H__*/
