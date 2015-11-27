/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __STAT_MAX_H__
#define __STAT_MAX_H__
//#ifndef __MAX_H__
//#define __MAX_H__
#include "dynlib_statisticsfunctions.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define max(a,b) (a>=b?a:b)

#define maxa(a,size1,b,size2,out) 	{int i;\
						for (i=0;i<size1[0]*size2[1];i++) out[i]=max(a[i],b[i]);\
                                                }

/*
** \brief max of a scalar element, just returns it
*/
#define		smaxs(in)			in
#define		srowmaxs(in)			in
#define		scolumnmaxs(in)			in
#define		smatlabmaxs(in)			in

/*
** \brief max of a scalar element, just returns it
*/
#define		dmaxs(in)			in
#define		drowmaxs(in)			in
#define		dcolumnmaxs(in)			in
#define		dmatlabmaxs(in)			in

/*
** \brief max of a scalar element, just returns it
*/
#define	        u8maxs(in)			(uint8)in
#define		u8rowmaxs(in)		        (uint8)in
#define		u8columnmaxs(in)		(uint8)in
#define		u8matlabmaxs(in)		(uint8)in
#define		u16maxs(in)			(uint16)in
#define		u16rowmaxs(in)		        (uint16)in
#define		u16columnmaxs(in)		(uint16)in
#define		u16matlabmaxs(in)		(uint16)in
#define		i8maxs(in)			(int8)in
#define		i8rowmaxs(in)		        (int8)in
#define		i8columnmaxs(in)		(int8)in
#define		i8matlabmaxs(in)		(int8)in
#define		i16maxs(in)			(int16)in
#define		i16rowmaxs(in)		        (int16)in
#define		i16columnmaxs(in)		(int16)in
#define		i16matlabmaxs(in)		(int16)in



/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC float		smaxa(float *in, int size);
EXTERN_STATFUNC void		srowmaxa(float *in, int lines, int columns, float* out);
EXTERN_STATFUNC void		scolumnmaxa(float *in, int lines, int columns, float* out);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC double		dmaxa(double *in, int size);
EXTERN_STATFUNC void		drowmaxa(double *in, int lines, int columns, double* out);
EXTERN_STATFUNC void		dcolumnmaxa(double *in, int lines, int columns, double* out);

/*
** \brief Sum of a uint8 array
** \param in the uint8 array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC uint8		u8maxa(uint8 *in, int size);
EXTERN_STATFUNC void		u8rowmaxa(uint8 *in, int lines, int columns, uint8* out);
EXTERN_STATFUNC void		u8columnmaxa(uint8 *in, int lines, int columns, uint8* out);

/*
** \brief Sum of a uint16 array
** \param in the uint16 array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC uint16		u16maxa(uint16 *in, int size);
EXTERN_STATFUNC void		u16rowmaxa(uint16 *in, int lines, int columns, uint16* out);
EXTERN_STATFUNC void		u16columnmaxa(uint16 *in, int lines, int columns, uint16* out);

/*
** \brief Sum of a int8 array
** \param in the int8 array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC int8		i8maxa(int8 *in, int size);
EXTERN_STATFUNC void		i8rowmaxa(int8 *in, int lines, int columns, int8* out);
EXTERN_STATFUNC void		i8columnmaxa(int8 *in, int lines, int columns, int8* out);

/*
** \brief Sum of a int16 array
** \param in the int16 array to process
** \param size, the size of the array
** \returns the max.
*/
EXTERN_STATFUNC int16		i16maxa(int16 *in, int size);
EXTERN_STATFUNC void		i16rowmaxa(int16 *in, int lines, int columns, int16* out);
EXTERN_STATFUNC void		i16columnmaxa(int16 *in, int lines, int columns, int16* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif
#endif /* !__STAT_MAX_H__ */
