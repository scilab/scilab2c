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
#ifndef __INT_RPIPERIPHERALSERIAL_H__
#define __INT_RPIPERIPHERALSERIAL_H__

#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_SerialSetup(port,size,baudrate)	u8RPISerialSetups(port,baudrate)
#define RPI_SerialClose(fd) 				u8RPISerialCloses(fd)

#define u80u80RPI_SerialSendDatau80(fd,data)	u8RPISerialSendDatas(fd,data)
#define u80i80RPI_SerialSendDatau80(fd,data)	i8RPISerialSendDatas(fd,data)	
#define u80u160RPI_SerialSendDatau80(fd,data)	u16RPISerialSendDatas(fd,data)
#define u80i160RPI_SerialSendDatau80(fd,data)	i16RPISerialSendDatas(fd,data)	
#define u80s0RPI_SerialSendDatau80(fd,data)		sRPISerialSendDatas(fd,data)
#define u80d0RPI_SerialSendDatau80(fd,data)		dRPISerialSendDatas(fd,data)	

#define u80u82RPI_SerialSendDatau80(fd,data,size) 	u8RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80i82RPI_SerialSendDatau80(fd,data,size) 	i8RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80u162RPI_SerialSendDatau80(fd,data,size)	u16RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80i162RPI_SerialSendDatau80(fd,data,size)	i16RPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80s2RPI_SerialSendDatau80(fd,data,size) 	sRPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80d2RPI_SerialSendDatau80(fd,data,size) 	dRPISerialSendDataa(fd,data,size[0]*size[1]);
#define u80g2RPI_SerialSendDatau80(fd,data,size)	gRPISerialSendDatas(fd,data,size[0]*size[1]);

#define RPI_SerialDataAvail(fd)			i16RPISerialDataAvails(fd)
#define RPI_SerialGetChar(fd)			i16RPISerialGetChars(fd)
#define RPI_SerialFlush(fd)				u8RPISerialFlushs(fd)	

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_RPIPERIPHERALSERIAL_H__*/
