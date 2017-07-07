<<<<<<< HEAD
/* Copyright (C) 2016 - IIT Bombay - FOSSEE
=======
 /* Copyright (C) 2016 - IIT Bombay - FOSSEE
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

=======
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#ifndef __INT_RPIPERIPHERALSERIAL_H__
#define __INT_RPIPERIPHERALSERIAL_H__

#include "types.h"
<<<<<<< HEAD
#include "RPIPeripheralSerial.h"
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
#define g2u320RPI_serialOpeni80(device,size,baud) gRPI_serialOpena(device,size[1],baud);
#define u80RPI_serialClose(fd) u8RPI_serialCloses(fd);
#define u80RPI_serialDataAvailu80(fd) u8RPI_serialDataAvails(fd);
#define u80RPI_serialFlush(fd) u8RPI_serialFlushs(fd);
#define u80RPI_serialGetcharg2(fd,out) u8RPI_serialGetchars(fd,out);
#define u80g2RPI_serialPrintf(fd,msg,size) u8RPI_serialPrintfs(fd,msg,size[1]);
#define u80u80RPI_serialPutchar(fd,character) u8RPI_serialPutchars(fd,character);
#define u80g2RPI_serialPutsg2(fd,character,size) u8RPI_serialPutss(fd,character,size[1]);
=======
#define RPI_SerialSetup(port,size,baudrate)	u16RPISerialSetups(port,baudrate)
#define RPI_SerialClose(fd) 				u8RPISerialCloses(fd)

#define u80u80RPI_SerialSendData(fd,data)	u8RPISerialSendDatas(fd,data)
#define u80i80RPI_SerialSendData(fd,data)	i8RPISerialSendDatas(fd,data)	
#define u80u160RPI_SerialSendData(fd,data)	u16RPISerialSendDatas(fd,data)
#define u80i160RPI_SerialSendData(fd,data)	i16RPISerialSendDatas(fd,data)	
#define u80s0RPI_SerialSendData(fd,data)		sRPISerialSendDatas(fd,data)
#define u80d0RPI_SerialSendData(fd,data)		dRPISerialSendDatas(fd,data)	

#define u80u82RPI_SerialSendData(fd,data,size) 	u8RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80i82RPI_SerialSendData(fd,data,size) 	i8RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80u162RPI_SerialSendData(fd,data,size)	u16RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80i162RPI_SerialSendData(fd,data,size)	i16RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80s2RPI_SerialSendData(fd,data,size) 	sRPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80d2RPI_SerialSendData(fd,data,size) 	dRPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80g2RPI_SerialSendData(fd,data,size)	gRPISerialSendDatas(fd,data,size[0]*size[1]);

#define RPI_SerialDataAvail(fd)			i16RPISerialDataAvails(fd)
#define RPI_SerialGetChar(fd)			i16RPISerialGetChars(fd)
#define RPI_SerialFlush(fd)				u8RPISerialFlushs(fd)	
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

<<<<<<< HEAD
#endif /* !__INT_RPIPERIPHERALSERIAL_H__ */
=======
#endif /*__INT_RPIPERIPHERALSERIAL_H__*/
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
