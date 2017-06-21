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
#ifndef __INT_STRSUBST_H__
#define __INT_STRSUBST_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define g2g2g2g2strsubstg2(str,size,search,size2,rep,size3,flagmain,size4,out)	gstrsubsta(str,size[1],search,size2[1],rep,size3[1],flagmain,size4[1],out)
#define g2g2g2strsubstg2(in,size,search,size2,rep,size3,out)	gstrsubsta(in,size[1],search,size2[1],rep,size3[1],'s',size3[1],out)



 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_STRSUBST_H__*/
