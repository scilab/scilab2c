/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __CVCORE_H__
#define __CVCORE_H__

#ifdef  __cplusplus
extern "C" {
#endif


#include "types.h"
#include "opencv2/core/core.hpp"

IplImage* imcvCreateImages(int width, int height, char *bit_depth, uint8 no_of_ch);
void imcvGetImgSizes(IplImage* src, double* imgsize);
#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__CVCORE_H__*/
