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
#ifndef __INT_SCHUR_H__
#define __INT_SCHUR_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2schurd2(in1,size1,out1) dschura(in1,size1[0],0,1,out1,NULL)
 
#define d2schurd2d2(in1,size1,out1,out2) dschura(in1,size1[0],0,2,out1,out2)	

#define d2g2schurd2(in1,size1,in2,size2,out1) (in2[0]=='c')? \
			dschura(in1,size1[0],1,1,out1,NULL): \
			dschura(in1,size1[0],2,1,out1,NULL)

#define d2g2schurd2d0(in1,size1,in2,size2,out1) (in2[0]=='c')? \
			dschura(in1,size1[0],1,2,out1,NULL): \
			dschura(in1,size1[0],2,2,out1,NULL)

#define d2g2schurd2d0d2(in1,size1,in2,size2,out1,out2) (in2[0]=='c')? \
			dschura(in1,size1[0],1,3,out1,out2): \
			dschura(in1,size1[0],2,3,out1,out2)

#define d2d2schurd2d2(in1,size1,in2,size2,out1,out2) dgschura(in1,size1[0], \
			in2,0,2,out1,out2,NULL,NULL)

#define d2d2schurd2d2d2d2(in1,size1,in2,size2,out1,out2,out3,out4) \
			dgschura(in1,size1[0],in2,0,4,out1,out2,out3,out4)

#define d2d2g2schurd0(in1,size1,in2,size2,in3,size3) dgschura(in1,size1[0], \
			in2,1,1,NULL,NULL,NULL,NULL)

#define d2d2g2schurd2d0(in1,size1,in2,size2,in3,size3,out1) \
			dgschura(in1,size1[0],in2,1,2,out1,NULL,NULL,NULL)

#define d2d2g2schurd2d2d0(in1,size1,in2,size2,in3,size3,out1,out2) \
			dgschura(in1,size1[0],in2,1,3,out1,out2,NULL,NULL)

#define d2d2g2schurd2d2d2d0(in1,size1,in2,size2,in3,size3,out1,out2,out3) \
			dgschura(in1,size1[0],in2,1,4,out1,out2,out3,NULL)

#define d2d2g2schurd2d2d2d2d0(in1,size1,in2,size2,in3,size3,out1,out2,out3, \
			out4) dgschura(in1,size1[0],in2,1,5,out1,out2,out3,out4)
			
#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_SCHUR_H__*/
