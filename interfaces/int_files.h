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
#ifndef __INT_FILES_H__
#define __INT_FILES_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define g2g2mopenf0(path, pathsize, mode, modesize) mopen(path, mode)

#define f0mclosei0(fptr) mclose(fptr)

#define d0g2f0mputi0(data, format, formatsize, fptr) dmputs(fptr, data)

#define s0g2f0mputi0(data, format, formatsize, fptr) smputs(fptr, data)

#define u80g2f0mputi0(data, format, formatsize, fptr) u8mputs(fptr, data)

#define i80g2f0mputi0(data, format, formatsize, fptr) i8mputs(fptr, data)

#define u160g2f0mputi0(data, format, formatsize, fptr) u16mputs(fptr, data)

#define i160g2f0mputi0(data, format, formatsize, fptr) i16mputs(fptr, data)

#define d2g2f0mputi0(data, size1, format, formatsize, fptr) \
 						dmputa(fptr, data, size1[0], size1[1])

#define s2g2f0mputi0(data, size1, format, formatsize, fptr) \
 						smputa(fptr, data, size1[0], size1[1])

#define u82g2f0mputi0(data, size1, format, formatsize, fptr) \
 						u8mputa(fptr, data, size1[0], size1[1])

#define i82g2f0mputi0(data, size1, format, formatsize, fptr) \
 						i8mputa(fptr, data, size1[0], size1[1])

#define u162g2f0mputi0(data, size1, format, formatsize, fptr) \
 						u16mputa(fptr, data, size1[0], size1[1])

#define i162g2f0mputi0(data, size1, format, formatsize, fptr) \
 						i16mputa(fptr, data, size1[0], size1[1])


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_FILES_H__*/
