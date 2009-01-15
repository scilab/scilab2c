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

#ifndef __INT_CAT_H__
#define __INT_CAT_H__

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

/* Matrix-Scalar */

/* Same type */
#define s2s0OpCcs2(in1,size,in2,out)				scolumncata(in1, size[0], size[1], in2, 1, 1, out);

#define d2d0OpCcd2(in1,size,in2,out)				dcolumncata(in1, size[0], size[1], in2, 1, 1, out);

#define c2c0OpCcc2(in1,size,in2,out)				ccolumncata(in1, size[0], size[1], in2, 1, 1, out);

#define z2z0OpCcz2(in1,size,in2,out)				zcolumncata(in1, size[0], size[1], in2, 1, 1, out);


/* Different type */

/* Scalar-Matrix */

/* Same type */
#define s0s2OpCcs2(in1,in2,size,out)				scolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define d0d2OpCcd2(in1,in2,size,out)				dcolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define c0c2OpCcc2(in1,in2,size,out)				ccolumncata(in1, 1, 1, in2, size[0], size[1], out);

#define z0z2OpCcz2(in1,in2,size,out)				zcolumncata(in1, 1, 1, in2, size[0], size[1], out);

/* Different type */






/* Row Cat */

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

/* Matrix-Scalar */

/* Same type */
#define s2s0OpRcs2(in1,size,in2,out)				srowcata(in1, size[0], size[1], in2, 1, 1, out);

#define d2d0OpRcd2(in1,size,in2,out)				drowcata(in1, size[0], size[1], in2, 1, 1, out);

#define c2c0OpRcc2(in1,size,in2,out)				crowcata(in1, size[0], size[1], in2, 1, 1, out);

#define z2z0OpRcz2(in1,size,in2,out)				zrowcata(in1, size[0], size[1], in2, 1, 1, out);


/* Different type */

/* Scalar-Matrix */

/* Same type */
#define s0s2OpRcs2(in1,in2,size,out)				srowcata(in1, 1, 1, in2, size[0], size[1], out);

#define d0d2OpRcd2(in1,in2,size,out)				drowcata(in1, 1, 1, in2, size[0], size[1], out);

#define c0c2OpRcc2(in1,in2,size,out)				crowcata(in1, 1, 1, in2, size[0], size[1], out);

#define z0z2OpRcz2(in1,in2,size,out)				zrowcata(in1, 1, 1, in2, size[0], size[1], out);

/* Different type */




#endif /* !__INT_CAT_H__ */
