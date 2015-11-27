/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __DIVISION_H__
#define __DIVISION_H__

#include "dynlib_operations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/*
**
** WARNING WE ASSUME MATRIXES TO BE CONSCISTENT
** size1 = size2;
**
*/


/*
** RIGHT DIVISION
*/

/*
** \brief Compute a right division for floats.
** \param in1 : input float.
** \param in2 : input float.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS float srdivs (float in1, float in2);

/*
** \brief Compute a right division element ways for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void srdiva (float* in1, float* in2, int size, float* out );

/*
** \brief Compute a right division for double.
** \param in1 : input double.
** \param in2 : input double.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS double drdivs (double in1, double in2);

/*
** \brief Compute a right division element ways for double.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void drdiva (double* in1, double* in2, int size, double* out );

/*
** \brief Compute a right division for floats complex.
** \param in1 : input float complex.
** \param in2 : input float complex.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS floatComplex crdivs (floatComplex in1, floatComplex in2);

/*
** \brief Compute a right division element ways for float complex.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void crdiva(floatComplex* in1, floatComplex* in2, int size, floatComplex* out );

/*
** \brief Compute a right division for double complex.
** \param in1 : input double complex.
** \param in2 : input double complex.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS doubleComplex zrdivs (doubleComplex in1, doubleComplex in2);

/*
** \brief Compute a right division element ways for double complex.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void zrdiva(doubleComplex* in1, doubleComplex* in2, int size, doubleComplex* out );


/*
** \brief Compute a right division element ways for uint8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void u8rdiva (uint8* in1, uint8* in2, int size, uint8* out );



/*
** \brief Compute a right division for uint8.
** \param in1 : input uint8.
** \param in2 : input uint8.
** \return in1 / in2 = in1 ./ in2.
*/

EXTERN_OPERATIONS uint8 u8rdivs (uint8 in1, uint8 in2);

/*
** \brief Compute a right division element ways for uint16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void u16rdiva (uint16* in1, uint16* in2, int size, uint16* out );


/*
** \brief Compute a right division element ways for int8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void i8rdiva (int8* in1, int8* in2, int size, int8* out );

/*
** \brief Compute a right division for int8.
** \param in1 : input int8.
** \param in2 : input int8.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS int8 i8rdivs (int8 in1, int8 in2);

/*
** \brief Compute a right division for uint16.
** \param in1 : input uint16.
** \param in2 : input uint16.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS uint16 u16rdivs (uint16 in1, uint16 in2);

/*
** \brief Compute a right division for int16.
** \param in1 : input int16.
** \param in2 : input int16.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS int16 i16rdivs (int16 in1, int16 in2);

/*
** \brief Compute a right division element ways for int16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 ./ in2.
*/
EXTERN_OPERATIONS void i16rdiva (int16* in1, int16* in2, int size, int16* out );


/*
** LEFT DIVISION
*/

/*
** \brief Compute a left division for floats.
** \param in1 : input float.
** \param in2 : input float.
** \return in1 \ in2 = in1 .\ in2.
*/
EXTERN_OPERATIONS float sldivs (float in1, float in2);

/*
** \brief Compute a left division element ways for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void sldiva (float* in1, float* in2, int size, float* out );

/*
** \brief Compute a left division for double.
** \param in1 : input double.
** \param in2 : input double.
** \return in1 \ in2 = in1 .\ in2.
*/
EXTERN_OPERATIONS double dldivs (double in1, double in2);

/*
** \brief Compute a left division element ways for double.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void dldiva (double* in1, double* in2, int size, double* out );

/*
** \brief Compute a left division for floats complex.
** \param in1 : input float complex.
** \param in2 : input float complex.
** \return in1 \ in2 = in1 .\ in2.
*/
EXTERN_OPERATIONS floatComplex cldivs (floatComplex in1, floatComplex in2);

/*
** \brief Compute a left division element ways for float complex.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void cldiva(floatComplex* in1, floatComplex* in2, int size, floatComplex* out );

/*
** \brief Compute a left division for double complex.
** \param in1 : input double complex.
** \param in2 : input double complex.
** \return in1 \ in2 = in1 .\ in2.
*/
EXTERN_OPERATIONS doubleComplex zldivs (doubleComplex in1, doubleComplex in2);

/*
** \brief Compute a left division element ways for double complex.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void zldiva(doubleComplex* in1, doubleComplex* in2, int size, doubleComplex* out );

/*
** \brief Compute a left division element ways for uint8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void u8ldiva (uint8* in1, uint8* in2, int size, uint8* out );

/*
** \brief Compute a right division for uint8.
** \param in1 : input uint8.
** \param in2 : input uint8.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS uint8 u8ldivs (uint8 in1, uint8 in2);

/*
** \brief Compute a left division element ways for int8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void i8ldiva (int8* in1, int8* in2, int size, int8* out );

/*
** \brief Compute a right division for int8.
** \param in1 : input int8.
** \param in2 : input int8.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS int8 i8ldivs (int8 in1, int8 in2);

/*
** \brief Compute a left division element ways for uint16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void u16ldiva (uint16* in1, uint16* in2, int size, uint16* out );


/*
** \brief Compute a right division for uint16.
** \param in1 : input uint16.
** \param in2 : input uint16.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS uint16 u16ldivs (uint16 in1, uint16 in2);

/*
** \brief Compute a left division element ways for int16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array = rows*columns.
** \param out : array that contains the division in1 .\ in2.
*/
EXTERN_OPERATIONS void i16ldiva (int16* in1, int16* in2, int size, int16* out );


/*
** \brief Compute a right division for int16.
** \param in1 : input int16.
** \param in2 : input int16.
** \return in1 / in2 = in1 ./ in2.
*/
EXTERN_OPERATIONS int16 i16ldivs (int16 in1, int16 in2);



#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__DIVISION_H__ */
