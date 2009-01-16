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

#ifndef __INT_OPCC_H__
#define __INT_OPCC_H__

/* Column Cat */

/* Same input elements */

#define s0s0OpCcs2(in1,in2,out)					scolumncats(in1,in2,out)
		
#define d0d0OpCcd2(in1,in2,out)					dcolumncats(in1,in2,out)

#define c0c0OpCcc2(in1,in2,out)					ccolumncats(in1,in2,out)

#define z0z0OpCcz2(in1,in2,out)					zcolumncats(in1,in2,out)

#define s2s2OpCcs2(in1,size1,in2,size2,out)			scolumncata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define d2d2OpCcd2(in1,size1,in2,size2,out)			dcolumncata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define c2c2OpCcc2(in1,size1,in2,size2,out)			ccolumncata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

#define z2z2OpCcz2(in1,size1,in2,size2,out)			zcolumncata(in1, size1[0], size2[1], in2, size1[0], size2[1], out)

/* Differents input elements */
#define s0c0OpCcc2(in1,in2,out)					crowcats(FloatComplex(in1,0),in2,out)
		
#define d0z0OpCcz2(in1,in2,out)					zrowcats(DoubleComplex(in1,0),in2,out)

#define c0s0OpCcc2(in1,in2,out)					crowcats(in1,FloatComplex(in2,0),out)

#define z0d0OpCcz2(in1,in2,out)					zrowcats(in1,DoubleComplex(in2,0),out)

#define s2c2OpCcc2(in1,size1,in2,size2,out)			crowcata(FloatComplexMatrix(in1,0,size1[0]*size1[1]), size1[0], size2[1], in2, size1[0], size2[1], out)

#define d2z2OpCcz2(in1,size1,in2,size2,out)			zrowcata(DoubleComplexMatrix(in1,0,size1[0]*size1[1]), size1[0], size2[1], in2, size1[0], size2[1], out)

#define c2s2OpCcc2(in1,size1,in2,size2,out)			crowcata(in1, size1[0], size2[1], FloatComplexMatrix(in2,0,size2[0]*size2[1]), size1[0], size2[1], out)

#define z2d2OpCcz2(in1,size1,in2,size2,out)			zrowcata(in1, size1[0], size2[1], DoubleComplexMatrix(in2,0,size2[0]*size2[1]), size1[0], size2[1], out)

/* Matrix-Scalar */

/* Same type */

#define s2s0OpCcs2(in1,size,in2,out)				srowcats(in2,0,(float *)out_tmp);srowcata(in1, size[0], size[1], out_tmp, 1, 1, out);

#define d2d0OpCcd2(in1,size,in2,out)				drowcats(in2,0,(double *)out_tmp);drowcata(in1, size[0], size[1], out_tmp, 1, 1, out);

#define c2c0OpCcc2(in1,size,in2,out)				crowcats(in2,0,(floatComplex *)out_tmp);crowcata(in1, size[0], size[1], out_tmp, 1, 1, out);

#define z2z0OpCcz2(in1,size,in2,out)				zrowcats(in2,0,(doubleComplex *)out_tmp);zcrowcata(in1, size[0], size[1], out_tmp, 1, 1, out);


/* Different type */
#define s2c0OpCcc2(in1,size,in2,out)				scolumncata(FloatComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], in2, 1, 1, out);

#define d2z0OpCcz2(in1,size,in2,out)				sdcolumncata(DoubleComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], in2, 1, 1, out);

#define c2s0OpCcc2(in1,size,in2,out)				ccolumncata(in1, size[0], size[1], FloatComplex(in2,0), 1, 1, out);

#define z2d0OpCcz2(in1,size,in2,out)				zrowcats(DoubleComplex(in2,0),DoubleComplex(0,0),(doubleComplex *)out_tmp);zrowcata(in1, size[0], size[1], out_tmp, 1, 1, out);

/* Scalar-Matrix */

/* Same type */
#define s0s2OpCcs2(in1,in2,size,out)				scolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define d0d2OpCcd2(in1,in2,size,out)				dcolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define c0c2OpCcc2(in1,in2,size,out)				ccolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define z0z2OpCcz2(in1,in2,size,out)				zcolumncata(in1, 1, 1, in2, size[0], size[1], out);

/* Different type */
#define s0c2OpCcc2(in1,in2,size,out)				scolumncata(FloatComplex(in2,0), 1, 1, in2, size[0], size[1], out);

#define d0z2OpCcz2(in1,in2,size,out)				dcolumncata(DoubleComplex(in2,0), 1, 1, in2, size[0], size[1], out);

#define c0s2OpCcc2(in1,in2,size,out)				ccolumncata(in1, 1, 1, FloatComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], out);

#define z0d2OpCcz2(in1,in2,size,out)				zcolumncata(in1, 1, 1, DoubleComplexMatrix(in1,0,size[0]*size[1]), size[0], size[1], out);

#endif /* !__INT_OPCC_H__ */
