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

#ifndef __INT_SVA_H__
#define __INT_SVA_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2svad2d2d2(in1,size,out1,out2,out3) dsvaa(1,in1,size[0],size[1],0,out1,out2,out3);
#define d2d0svad2d2d2(in1,size1,in2,out1,out2,out3) dsvaa(2,in1,size1[0],size1[1],in2,out1,out2,out3);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_SVA_H__*/

