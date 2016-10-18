//This file defines constants corresponding to gpios and digital input functions.
//
// Authors
//     Siddhesh Wani
//

#ifndef __AVRPERIPHERALGPIO_H__
#define __AVRPERIPHERALGPIO_H__

#include <avr/io.h>

#ifdef  __cplusplus
extern "C" {
#endif


#include <avr/io.h>
#include "types.h"

//Port definitions
#define PORT_A 1
#define PORT_B 2
#define PORT_C 3
#define PORT_D 4

//Direction definitions
#define INPUT 0
#define OUTPUT 1

//Pin state definitions
#define LOW  0
#define HIGH 1

//Function prototypes
void u8AVRDigitalSetups(uint8 port,uint8 pin,uint8 direction);

uint8 u8AVRDigitalIns(uint8 port,uint8 pin);

void u8AVRDigitalOuts(uint8 port,uint8 pin,uint8 state);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
