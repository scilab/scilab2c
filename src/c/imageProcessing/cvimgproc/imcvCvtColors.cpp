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

/* Function to convert image object to other color space*/

#include "types.h"
#include "cvcore.hpp"
#include "cvimgproc.hpp"
#include <stdio.h>

using namespace cv;

Mat imcvCvtColors(Mat src, char* code)
{
	Mat dst(src.rows, src.cols, src.type());
	
	/*RGB  <--> Gray*/
	if(strcmp(code,"CV_RGB2GRAY") == 0)
		{cvtColor(src,dst,CV_RGB2GRAY);}
	else  if(strcmp(code,"CV_BGR2GRAY") == 0)
		{cvtColor(src,dst,CV_BGR2GRAY);}
	else  if(strcmp(code,"CV_GRAY2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_GRAY2RGB);}
	else  if(strcmp(code,"CV_GRAY2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_GRAY2BGR);}
	
	/*RGB <--> CIE XYZ.Rec 709 with D65 white point*/	
	else  if(strcmp(code,"CV_RGB2XYZ") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2XYZ);}
	else  if(strcmp(code,"CV_BGR2XYZ") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2XYZ);}
	else  if(strcmp(code,"CV_XYZ2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_XYZ2RGB);}
	else  if(strcmp(code,"CV_XYZ2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_XYZ2BGR);}
	
	/*RGB <--> YCrCb JPEG (or YCC) */	
	else  if(strcmp(code,"CV_BGR2YCrCb") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2YCrCb);}
	else  if(strcmp(code,"CV_RGB2YCrCb") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2YCrCb);}
	else  if(strcmp(code,"CV_YCrCb2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_YCrCb2BGR);}
	else  if(strcmp(code,"CV_YCrCb2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_YCrCb2RGB);}
	
	/*RGB <--> HSV */	
	else  if(strcmp(code,"CV_BGR2HSV") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2HSV);}
	else  if(strcmp(code,"CV_RGB2HSV") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2HSV);}	
	else  if(strcmp(code,"CV_HSV2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_HSV2BGR);}
	else  if(strcmp(code,"CV_HSV2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_HSV2RGB);}
 
	/*RGB <--> HLS */
	else  if(strcmp(code,"CV_BGR2HLS") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2HLS);}
	else  if(strcmp(code,"CV_RGB2HLS") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2HLS);}	
	else  if(strcmp(code,"CV_HLS2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_HLS2BGR);}
	else  if(strcmp(code,"CV_HLS2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_HLS2RGB);}

	/*RGB <--> CIE L*a*b* */
	else  if(strcmp(code,"CV_BGR2Lab") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2Lab);}
	else  if(strcmp(code,"CV_RGB2Lab") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2Lab);}	
	else  if(strcmp(code,"CV_Lab2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_Lab2BGR);}
	else  if(strcmp(code,"CV_Lab2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_Lab2RGB);}

	/*RGB <--> CIE L*u*v* */
	else  if(strcmp(code,"CV_BGR2Luv") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BGR2Luv);}
	else  if(strcmp(code,"CV_RGB2Luv") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_RGB2Luv);}	
	else  if(strcmp(code,"CV_Luv2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_Luv2BGR);}
	else  if(strcmp(code,"CV_Luv2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_Luv2RGB);}	
	
	/*Bayer <--> RGB */
	else  if(strcmp(code,"CV_BayerBG2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerBG2BGR);}
	else  if(strcmp(code,"CV_BayerGB2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerGB2BGR);}
	else  if(strcmp(code,"CV_BayerRG2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerRG2BGR);}	
	else  if(strcmp(code,"CV_BayerGR2BGR") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerGR2BGR);}
	else  if(strcmp(code,"CV_BayerBG2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerBG2RGB);}	
	else  if(strcmp(code,"CV_BayerGB2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerGB2RGB);}	
	else  if(strcmp(code,"CV_BayerRG2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerRG2RGB);}
	else  if(strcmp(code,"CV_BayerBG2RGB") == 0)
		{dst.reshape(3);
		cvtColor(src,dst,CV_BayerGR2RGB);}	
	return dst;
}
