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
#ifndef __FILES_H__
#define __FILES_H__

#include <stdio.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif


FILE *mopen (char *path, char *mode);

int mclose(FILE *fptr);

/*For writing single/scalar values*/
int dmputs (FILE *fptr, double data);
int smputs (FILE *fptr, float data);
int u8mputs (FILE *fptr, uint8 data);
int i8mputs (FILE *fptr, int8 data);
int u16mputs (FILE *fptr, uint16 data);
int i16mputs (FILE *fptr, int16 data);

/*For writing array/matrix values*/
int dmputa (FILE *fptr, double *data, int row, int col);
int smputa (FILE *fptr, float *data, int row, int col);
int u8mputa (FILE *fptr, uint8 *data, int row, int col);
int i8mputa (FILE *fptr, int8 *data, int row, int col);
int u16mputa (FILE *fptr, uint16 *data, int row, int col);
int i16mputa (FILE *fptr, int16 *data, int row, int col);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__FILES_H__*/
