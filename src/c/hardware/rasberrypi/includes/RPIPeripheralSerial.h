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
void u8RPISerialCloses(int fd);

void u8RPISerialSendChars(int fd, uint8 data);
void u8RPISerialSendDatas(int fd, uint8 data);
void i8RPISerialSendDatas(int fd, int8 data);
void u16RPISerialSendDatas(int fd, uint16 data);
void i16RPISerialSendDatas(int fd, int16 data);
void sRPISerialSendDatas(int fd, float data);
void dRPISerialSendDatas(int fd, double data);
void u8RPISerialSendDataa(int fd, void* data, int size);
void i8RPISerialSendDataa(int fd, int8* data, int size);
void u16RPISerialSendDataa(int fd, uint16* data, int size);
void i16RPISerialSendDataa(int fd, int16* data, int size);
void sRPISerialSendDataa(int fd, float* data, int size);
void dRPISerialSendDataa(int fd, double* data, int size);
void gRPISerialSendDatas(int fd, void* data, int size);

int16 i16RPISerialDataAvails(int fd);
int16 i16RPISerialGetChars(int fd);

void u8RPISerialFlushs(int fd);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALSERIAL_H__*/
