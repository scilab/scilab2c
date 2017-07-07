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

#ifndef __INT_ROWCOMP_H__
#define __INT_ROWCOMP_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2rowcompd2d0(in1,size,out1) drowcompa(1,in1,size[0],size[1],NULL,0,out1);
#define d2g2rowcompd2d0(in1,size,flag,size1,out1) drowcompa(2,in1,size[0],size[1],flag,0,out1);
#define d2g2d0rowcompd2d0(in1,size,flag,size1,tol,out1) drowcompa(2,in1,size[0],size[1],flag,tol,out1);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_ROWCOMP_H__*/

