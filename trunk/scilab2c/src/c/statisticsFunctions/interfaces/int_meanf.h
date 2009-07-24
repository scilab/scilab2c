/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at    
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/* THIS IS AN AUTOMATICALLY GENERATED FILE : DO NOT EDIT BY HAND. */

#ifndef __INT_MEANF_H__
#define __INT_MEANF_H__

#define s0s0meanfs0(in1,in2)					smeanfs(in1,in2)

#define d0d0meanfd0(in1,in2)					dmeanfs(in1,in2)

#define c0s0meanfc0(in1,in2)					cmeanfs(in1,in2)

#define z0d0meanfz0(in1,in2)					zmeanfs(in1,in2)

#define s2s2meanfs0(in1, size1, in2, size2)				smeanfa(in1, size1[0]*size1[1], in2)

#define d2d2meanfd0(in1, size1, in2, size2)				dmeanfa(in1, size1[0]*size1[1], in2)

#define c2s2meanfc0(in1, size1, in2, size2)				cmeanfv(in1, size1[0], size1[1], in2)

#define z2d2meanfz0(in1, size1, in2, size2)				zmeanfv(in1, size1[0], size1[1], in2)


/*by rows or columns */

#define s0s0s0meanfs0(in1,in2,in3)				(in3==1) ? srowmeanfs(in1,in2) : scolumnmeanfs(in1,in2)	

#define d0d0d0meanfd0(in1,in2,in3)				(in3==1) ? drowmeanfs(in1,in2) : dcolumnmeanfs(in1,in2)	

#define c0s0s0meanfc0(in1,in2,in3)				(in3==1) ? crowmeanfs(in1,in2) : ccolumnmeanfs(in1,in2)	

#define z0d0d0meanfz0(in1,in2,in3)				(in3==1) ? zrowmeanfs(in1,in2) : zcolumnmeanfs(in1,in2)	

#define s2s2s0meanfs2(in1, size1, in2, size2,in3,out)		(in3==1) ? srowmeanfa(in1,size1[0],size1[1],in2,out) : scolumnmeanfa(in1,size1[0],size1[1],in2,out)	

#define d2d2d0meanfd2(in1, size1, in2, size2,in3,out)		(in3==1) ? drowmeanfa(in1,size1[0],size1[1],in2,out) : dcolumnmeanfa(in1,size1[0],size1[1],in2,out)

#define c2s2s0meanfc2(in1, size1, in2, size2,in3,out)		(in3==1) ? crowmeanfa(in1,size1[0],size1[1],in2,out) : ccolumnmeanfa(in1,size1[0],size1[1],in2,out)

#define z2d2d0meanfz2(in1, size1, in2, size2,in3,out)		(in3==1) ? zrowmeanfa(in1,size1[0],size1[1],in2,out) : zcolumnmeanfa(in1,size1[0],size1[1],in2,out)	
		
/*
#define d2d2d0meanfd2(in1,size1,in2,size2 ,in3 ,out)		(in3==1) ? drowmeanfa(in1,size1[0],size1[1],in2 ,out) : dcolumnmeanfa(in1,size1[0],size1[1], in2,out)		
*/	
	

#endif /* !__INT_MEANF_H__ */
