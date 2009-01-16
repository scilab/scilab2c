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

#ifndef __INT_OPRC_H__
#define __INT_OPRC_H__



/* Row Cat */

/* Scalar-Scalar */

/* Same input elements */

#define s0s0OpRcs2(in1,in2,out)					srowcats(in1,in2,out)
		
#define d0d0OpRcd2(in1,in2,out)					drowcats(in1,in2,out)

#define c0c0OpRcc2(in1,in2,out)					crowcats(in1,in2,out)

#define z0z0OpRcz2(in1,in2,out)					zrowcats(in1,in2,out)

#define s2s2OpRcs2(in1,size1,in2,size2,out)			srowcata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define d2d2OpRcd2(in1,size1,in2,size2,out)			drowcata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define c2c2OpRcc2(in1,size1,in2,size2,out)			crowcata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define z2z2OpRcz2(in1,size1,in2,size2,out)			zrowcata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

/* Differents input elements */

#define s0c0OpRcc2(in1,in2,out)					crowcats(FloatComplex(in1,0),in2,out)
		
#define d0z0OpRcz2(in1,in2,out)					zrowcats(DoubleComplex(in1,0),in2,out)

#define c0s0OpRcc2(in1,in2,out)					crowcats(in1,FloatComplex(in2,0),out)

#define z0d0OpRcz2(in1,in2,out)					zrowcats(in1,DoubleComplex(in2,0),out)

#define s2c2OpRcc2(in1,size1,in2,size2,out)			crowcata(FloatComplexMatrix(in1,0,size1[0]*size1[1]), size1[0], size2[1], in2, size1[0], size2[1], out)

#define d2z2OpRcz2(in1,size1,in2,size2,out)			zrowcata(DoubleComplexMatrix(in1,0,size1[0]*size1[1]), size1[0], size2[1], in2, size1[0], size2[1], out)

#define c2s2OpRcc2(in1,size1,in2,size2,out)			crowcata(in1, size1[0], size2[1], FloatComplexMatrix(in2,0,size2[0]*size2[1]), size1[0], size2[1], out)

#define z2d2OpRcz2(in1,size1,in2,size2,out)			zrowcata(in1, size1[0], size2[1], DoubleComplexMatrix(in2,0,size2[0]*size2[1]), size1[0], size2[1], out)

/* Matrix-Scalar */

/* Same type */
double out_tmp[2];
#define s2s0OpRcs2(in1,size,in2,out)				srowcata(in1, size[0], size[1], in2, 1, 1, out);

#define d2d0OpRcd2(in1,size,in2,out)				dcolumncats(in2,0,out_tmp); dcolumncata(in1, size[0], size[1], out_tmp, 1, 1, out);

#define c2c0OpRcc2(in1,size,in2,out)				crowcata(in1, size[0], size[1], in2, 1, 1, out);

#define z2z0OpRcz2(in1,size,in2,out)				zrowcata(in1, size[0], size[1], in2, 1, 1, out);


/* Different type */
#define s2c0OpRcc2(in1,size,in2,out)				crowcata(FloatComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], in2, 1, 1, out);

#define d2z0OpRcz2(in1,size,in2,out)				zrowcata(DoubleComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], in2, 1, 1, out);

#define c2s0OpRcc2(in1,size,in2,out)				crowcata(in1, size[0], size[1], FloatComplex(in2,0), 1, 1, out);

#define z2d0OpRcz2(in1,size,in2,out)				zrowcata(in1, size[0], size[1], DoubleComplex(in2,0), 1, 1, out);





/* Scalar-Matrix */

/* Same type */
#define s0s2OpRcs2(in1,in2,size,out)				srowcata(in1, 1, 1, in2, size[0], size[1], out);

#define d0d2OpRcd2(in1,in2,size,out)				drowcata(in1, 1, 1, in2, size[0], size[1], out);

#define c0c2OpRcc2(in1,in2,size,out)				crowcata(in1, 1, 1, in2, size[0], size[1], out);

#define z0z2OpRcz2(in1,in2,size,out)				zrowcata(in1, 1, 1, in2, size[0], size[1], out);

/* Different type */
#define s0c2OpRcc2(in1,in2,size,out)				crowcata(FloatComplex(in1,0), 1, 1, in2, size[0], size[1], out);

#define d0z2OpRcz2(in1,in2,size,out)				zrowcata(DoubleComplex(in1,0), 1, 1, in2, size[0], size[1], out);

#define c0s2OpRcc2(in1,in2,size,out)				crowcata(in1, 1, 1, FloatComplexMatrix(in2,0,size[0]*size[1]), size[0], size[1], out);

#define z0d2OpRcz2(in1,in2,size,out)				zrowcata(in1, 1, 1, DoubleComplexMatrix(in2,0,size[0]*size[1]), size[0], size[1], out);


#endif /* !__INT_OPRC_H__ */
