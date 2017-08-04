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
#ifndef __INT_COVAR_H__
#define __INT_COVAR_H__

#ifdef  __cplusplus
extern "C" {
#endif

	
#define d2d2d2covard0(in1, size, in2, size2, in3, size3)		dcovars(in1, size[0], size[1], in2, size2[0], size2[1], in3, size3[0], size3[1])	
#define s2s2s2covars0(in1, size, in2, size2, in3, size3)		scovars(in1, size[0], size[1], in2, size2[0], size2[1], in3, size3[0], size3[1])	
#define z2z2z2covarz0(in1, size, in2, size2, in3, size3)		zcovars(in1, size[0], size[1], in2, size2[0], size2[1], in3, size3[0], size3[1])	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_COVAR_H__*/
