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

#ifdef  __cplusplus
extern "C" {
#endif


#include "types.h"
#include "opencv2/imgproc/imgproc.hpp"

#define im0im0g2CV_CvtColoru80(src,dst,code,code_size) imcvCvtColors(src,dst,code)
#define im0d0d0g2CV_Thresholdim0(src,threshold,maxvalue,thresh_type,type_size) 
				imcvThrehold(src,threshold,maxvalue,thresh_type)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__INT_CVIMGPROC_H__*/
