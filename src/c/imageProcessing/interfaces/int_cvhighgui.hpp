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

#ifndef __INT_CVHIGHGUI_H__
#define __INT_CVHIGHGUI_H__


#include "types.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

//#define g2d0CV_LoadImageim0(filename,name_size,loadtype) imcvLoadImages(filename,loadtype)
#define g2d0CV_LoadImagemt0(filename,name_size,loadtype) imread(filename,loadtype)
#define g2mt0CV_ShowImageu80(winname,win_size,img) imshow(winname,img)
#define mt0CV_ShowImage(img) imshow("",img)

#define d0CV_WaitKey(delay) waitKey((int)delay)
#define s80CV_WaitKey(delay) waitKey((int)delay)
#define u80CV_WaitKey(delay) waitKey((int)delay)
#define i80CV_WaitKey(delay) waitKey((int)delay)
#define u160CV_WaitKey(delay) waitKey((int)delay)
#define i160CV_WaitKey(delay) waitKey((int)delay)

#define g2mt0CV_SaveImage(filename,name_size,img) imwrite(filename,img)	

#endif  /*__INT_CVHIGHGUI_H__*/
