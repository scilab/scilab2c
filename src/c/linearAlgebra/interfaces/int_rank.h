 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __INT_RANK_H__
#define __INT_RANK_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2rankd0(in1,size1) dranka(in1, size1[0], size1[1])

#define z2rankz0(in1,size1) zranka(in1, size1[0], size1[1])

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_RANK_H__*/
