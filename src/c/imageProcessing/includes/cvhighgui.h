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

#ifndef __CVHIGHGUI_H__
#define __CVHIGHGUI_H__

#ifdef  __cplusplus
extern "C" {
#endif


#include "types.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

IplImage* imcvLoadImages(char *filename, uint8 opentype);
uint8 imcvShowImages(char *winname, IplImage* img);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__CVCORE_H__*/
