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
#ifndef __RPIPERIPHERALSERIAL_H__
#define __RPIPERIPHERALSERIAL_H__

#include "types.h"
#include "wiringSerial.h"

#ifdef  __cplusplus
extern "C" {
#endif

int u8RPISerialSetups(char* port, int baudrate);
uint8 u8RPISerialCloses(int fd);

uint8 u8RPISerialSendChars(int fd, uint8 data);
uint8 u8RPISerialSendDatas(int fd, uint8 data);
uint8 i8RPISerialSendDatas(int fd, int8 data);
uint8 u16RPISerialSendDatas(int fd, uint16 data);
uint8 i16RPISerialSendDatas(int fd, int16 data);
uint8 sRPISerialSendDatas(int fd, float data);
uint8 dRPISerialSendDatas(int fd, double data);
uint8 u8RPISerialSendDataa(int fd, uint8* data, int size);
uint8 i8RPISerialSendDataa(int fd, int8* data, int size);
uint8 u16RPISerialSendDataa(int fd, uint16* data, int size);
uint8 i16RPISerialSendDataa(int fd, int16* data, int size);
uint8 sRPISerialSendDataa(int fd, float* data, int size);
uint8 dRPISerialSendDataa(int fd, double* data, int size);
uint8 gRPISerialSendDatas(int fd, uint8* data, int size);

int16 i16RPISerialDataAvails(int fd);
int16 i16RPISerialGetChars(int fd);

uint8 u8RPISerialFlushs(int fd);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALSERIAL_H__*/
