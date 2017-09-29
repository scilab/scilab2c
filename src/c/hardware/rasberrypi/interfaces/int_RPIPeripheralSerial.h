/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALSERIAL_H__
#define __INT_RPIPERIPHERALSERIAL_H__

#include "types.h"
#include "RPIPeripheralSerial.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define g2u320RPI_serialOpeni80(device,size,baud) gRPI_serialOpena(device,size[1],baud);
#define g2d0RPI_serialOpeni80(device,size,baud) gRPI_serialOpena(device,size[1],baud);

#define u80RPI_serialClose(fd) u8RPI_serialCloses(fd);
#define d0RPI_serialClose(fd) u8RPI_serialCloses(fd);

#define u80RPI_serialDataAvailu80(fd) u8RPI_serialDataAvails(fd);
#define d0RPI_serialDataAvailu80(fd) u8RPI_serialDataAvails(fd);

#define u80RPI_serialFlush(fd) u8RPI_serialFlushs(fd);
#define d0RPI_serialFlush(fd) u8RPI_serialFlushs(fd);

#define u80RPI_serialGetcharg2(fd,out) u8RPI_serialGetchars(fd,out);
#define d0RPI_serialGetcharg2(fd,out) u8RPI_serialGetchars(fd,out);

#define u80g2RPI_serialPrintf(fd,msg,size) u8RPI_serialPrintfs(fd,msg,size[1]);
#define d0g2RPI_serialPrintf(fd,msg,size) u8RPI_serialPrintfs(fd,msg,size[1]);

#define u80u80RPI_serialPutchar(fd,character) u8RPI_serialPutchars(fd,character);
#define d0d0RPI_serialPutchar(fd,character) u8RPI_serialPutchars(fd,character);

#define u80g2RPI_serialPutsg2(fd,character,size) u8RPI_serialPutss(fd,character,size[1]);
#define d0g2RPI_serialPutsg2(fd,character,size) u8RPI_serialPutss(fd,character,size[1]);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALSERIAL_H__ */
