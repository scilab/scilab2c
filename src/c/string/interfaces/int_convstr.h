 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_CONVSTR_H__
#define __INT_CONVSTR_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define g2g2convstrg2(in,size,flag,size2,out)	gconvstrs(in,size[0]*size[1],flag,size2[1],out)
//#define g2g2convstrg0(in,size,type,typesize,out)	(type=='u': \
			gconvstrs(in,size[0]*size[1],0,out)?gconvstrs(in,size[0]*size[1],1,out))

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_CONVSTR_H__*/
