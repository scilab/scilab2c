/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_SYSLIN_H__
#define __INT_SYSLIN_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define g2d2d2d2syslinss2(in1,size1,in2,size2,in3,size3,in4,size4,out) \
	dsyslina(in1,in2,size2[0],in3,size3[1],in4,size4[0],NULL,NULL,out)

#define g2d2d2d2d2syslinss2(in1,size1,in2,size2,in3,size3,in4,size4,in5, \
	size5,out)	dsyslina(in1,in2,size2[0],in3,size3[1],in4,size4[0],in5,NULL,out)

#define g2d2d2d2d2d2syslinss2(in1,size1,in2,size2,in3,size3,in4,size4, \
 	in5,size5,in6,size6,out)	dsyslina(in1,in2,size2[0],in3,size3[1],in4, \
 	size4[0],in5,in6,out)
//
#define g2d0d0d0syslinss2(in1,size1,in2,in3,in4,out) \
	dsyslina(in1,&in2,1,&in3,1,&in4,1,NULL,NULL,out)

#define g2d0d2d0syslinss2(in1,size1,in2,in3,size3,in4,out) \
	dsyslina(in1,&in2,1,in3,size3[1],&in4,1,NULL,NULL,out)

#define g2d0d0d2syslinss2(in1,size1,in2,in3,in4,size4,out) \
	dsyslina(in1,&in2,1,&in3,1,in4,size4[0],NULL,NULL,out)

#define g2d0d2d2syslinss2(in1,size1,in2,in3,size3,in4,size4,out) \
	dsyslina(in1,&in2,1,in3,size3[1],in4,size4[0],NULL,NULL,out)
//
#define g2d0d0d0d0syslinss2(in1,size1,in2,in3,in4,in5,out) \
	dsyslina(in1,&in2,1,&in3,1,&in4,1,&in5,NULL,out)

#define g2d0d2d0d2syslinss2(in1,size1,in2,in3,size3,in4,in5,size5, \
	out) dsyslina(in1,&in2,1,in3,size3[1],&in4,1,&in5,NULL,out)

#define g2d0d0d2d2syslinss2(in1,size1,in2,in3,in4,size4,in5,size5, \
	out) dsyslina(in1,&in2,1,&in3,1,in4,size4[0],in5,NULL,out)

#define g2d0d2d2d2syslinss2(in1,size1,in2,in3,size3,in4,size4,in5, \
	size5, out) dsyslina(in1,&in2,1,in3,size3[1],in4,size4[0],in5,NULL,out)

#define g2d2d2d2d0syslinss2(in1,size1,in2,size2,in3,size3,in4,size4, \
	in5,out) dsyslina(in1,in2,size2[0],in3,size3[1],in4,size4[0],&in5,NULL,out)
//
#define g2d0d0d0d0d0syslinss2(in1,size1,in2,in3,in4,in5,in6,out) \
	dsyslina(in1,&in2,1,&in3,1,&in4,1,&in5,&in6,out)

#define g2d0d2d0d2d0syslinss2(in1,size1,in2,in3,size3,in4,in5,size5, \
	in6,out) dsyslina(in1,&in2,1,in3,size3[1],in4,1,in5,&in6,out)

#define g2d0d0d2d2d0syslinss2(in1,size1,in2,in3,in4,size4,in5,size5, \
	in6,out) dsyslina(in1,&in2,1,in3,1,in4,size4[0],in5,&in6,out)

#define g2d0d2d2d2d0syslinss2(in1,size1,in2,in3,size3,in4,size4,in5, \
	size5,in6,out) dsyslina(in1,&in2,1,in3,size3[1],in4,size4[0],in5,&in6,out)

#define g2d2d2d2d0d2syslinss2(in1,size1,in2,size2,in3,size3,in4,size4, \
	in5,in6,size6,out) dsyslina(in1,in2,size2[0],in3,size3[1],in4,size4[0], \
	&in5,in6,out)

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /*__INT_SYSLIN_H__*/