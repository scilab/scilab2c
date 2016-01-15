// Function to initialise uart interface of AVR
//
// Calling Sequence
//     u8AVRUARTSetups(uint8 mode, uint8 baudrate, uint8 stopbits, uint8 parity)
//
// Parameters
//     mode : Mode of usart interface (0-Normal mode, 1-Double speed mode, 
//							2-Synchronous master mode)
//     baudrate : Baudrate for communication. Refer AVRPeripheralUART.h 
//							for available options) 
//     stopbits : No. of stopbits (0-1) for stopbits 1 and 2 resp.
//	   parity: set parity bit. (0-disabled, 1-Even parity, 2-Odd parity)	
//
//
// Description
//	   This function initialises uart interface for AVR. Available modes are 
//	   Normal mode (0), Double speed mode (1), Synchronous master mode(2). 'baudrate' 
//	   decides baudrate for communication. For baudrate settings, variable 
//	   'XTAL_FREQUENCY' is required. 'stopbits' sets no of stopbits for data 
//	   packet. 0 for 1 stopbit and 1 for 2 stopbits. 'parity' decides parity bit
//	   for communication. 0 for disabling parity bit, 1 for even parity and 2 
//	   for odd parity.  	     
//
// Authors
//     Siddhesh Wani
//

#include "AVRPeripheralUART.h"

uint8 u8AVRUARTSetups(uint8 mode, uint8 baudrate, uint8 stopbits, uint8 parity)
{
	switch (mode) //According to mode set bits UMSEL and U2X
	{
		case 0: //Normal mode
				UCSRC &= ~(1<<6); //Clear bit 6 UMSEL  
				break;

		case 1: //Double speed mode
				UCSRC &= ~(1<<6); //Clear bit 6 UMSEL
				break;

		case 2: //Synchronous master mode
				UCSRC |= (1<<6);  //Set bit 6 UMSEL  
				break;
	}
    
	if(stopbits == 0)
	{   // 1 stopbit
		UCSRC &= ~(1<<3);
	}
	else 
	{   // 2 stopbits
		UCSRC |= (1<<3);
	}

	//Set parity bit settings
	switch(parity)
	{
		case 0: // Parity disabled
				UCSRC &= ~(3<<4);	//UPM1:0=0
				break;
		case 1:// Even parity
				UCSRC |= (1<<5);    //UPM1:0 = 2
				UCSRC &= ~(1<<4);
				break;
		case 2:// Odd parity
				UCSRC |= (1<<5);    //UPM1:1 = 3
				UCSRC |= (1<<4);
				break;
	}

	//Set baud rate
	# define BAUD baudrate
	#include "util/setbaud.h"
	UBRRH = UBRRH_VALUE;
	UBRRL = UBRRL_VALUE;
	#if USE_2X
	UCSRA |= (1 << U2X);
	#else
	UCSRA &= ~(1 << U2X);
	#endif
    return 0;
}

