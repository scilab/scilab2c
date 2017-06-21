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
#ifndef __INT_COSD_H__
#define __INT_COSD_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cosdd2(in,size,out)	dcosda(in,size[1],out)
#define d0cosdd0(in)	dcosds(in)
#define s2cosds2(in,size,out)	scosda(in,size[1],out)
#define s0cosds0(in)	scosds(in)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_COSD_H__*/
