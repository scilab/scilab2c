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

#ifndef __INT_CVIMGPROC_H__
#define __INT_CVIMGPROC_H__

#include "types.h"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#define mt0g2CV_CvtColormt0(src,code,code_size) imcvCvtColors(src,code)
#define mt0d0d0g2CV_Thresholdmt0(src,threshold,maxvalue,thresh_type,type_size) \
				imcvThresholds(src,threshold,maxvalue,thresh_type)

#endif  /*__INT_CVIMGPROC_H__*/
