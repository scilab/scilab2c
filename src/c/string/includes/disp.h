/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */



#ifndef __DISP_H__
#define __DISP_H__

#include <stdio.h>
#include "dynlib_string.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
** \brief display of a float scalar 
*/
EXTERN_STRING double sdisps (float in);

/*
** \brief display of a double scalar
*/
EXTERN_STRING double ddisps (double in);

/*
** \brief display of a float complex
*/
EXTERN_STRING double cdisps (floatComplex in);

/*
** \brief display of a double complex
*/
EXTERN_STRING double zdisps (doubleComplex in);

/*
** \brief display of a uint8 scalar 
*/
EXTERN_STRING double u8disps (uint8 in);

/*
** \brief display of a int8 scalar 
*/
EXTERN_STRING double i8disps (int8 in);

/*
** \brief display of a uint16 scalar 
*/
EXTERN_STRING double u16disps (uint16 in);

/*
** \brief display of a int16 scalar 
*/
EXTERN_STRING double i16disps (int16 in);


/*
** \brief display of a float scalar array
** \param in the float scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double sdispa (float* in, int rows, int columns);

/*
** \brief display of a double scalar array
** \param in the double scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double ddispa (double* in, int rows, int columns);

/*
** \brief display of a float complex array
** \param in the float complex array to display
** \param size the size of the array
*/
EXTERN_STRING double cdispa (floatComplex* in, int rows, int columns);

/*
** \brief display of a double complex array
** \param in the double complex array to display
** \param size the size of the array
*/
EXTERN_STRING double zdispa (doubleComplex* in, int rows, int columns);

/*
** \brief display of a uint8 scalar array
** \param in the uint8 scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double u8dispa (uint8* in, int rows, int columns);

/*
** \brief display of a int8 scalar array
** \param in the int8 scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double i8dispa (int8* in, int rows, int columns);

/*
** \brief display of a uint16 scalar array
** \param in the uint16 scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double u16dispa (uint16* in, int rows, int columns);

/*
** \brief display of a int16 scalar array
** \param in the int16 scalar array to display
** \param size the size of the array
*/
EXTERN_STRING double i16dispa (int16* in, int rows, int columns);

EXTERN_STRING double ddisph (double *in, int rows, int cols, int levels);

EXTERN_STRING double g2dispd0(char *array,int* tmparraysize);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__DISP_H__ */
