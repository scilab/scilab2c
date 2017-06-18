/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ashish Kamble
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/ 
//Function to Setup Serial communication for ATmega16.


#include "AVRPeripheralUART.h"

uint8 u8AVRUARTSetups(uint8 mode, uint32 baudrate, uint8 stopbits, uint8 parity)
{
//Enable UART and USART
 UCSRC |= (1<<URSEL);
 UCSRB |= (1<<TXEN)|(1<<RXEN);

 switch (mode) //According to mode set bits UMSEL and U2X
{
 case 0: //Normal mode
        UCSRC &= ~(1<<UMSEL);  //Clear bit 6 UMSEL and  U2X=0
	UCSRA &= ~(1<<U2X);
	UCSRC &= ~(1<<UCPOL);  // Clock polarity bit
	break;

 case 1: //Double speed mode
	UCSRC &= ~(1<<UMSEL); //Clear bit 6 UMSEL and U2X=1
	UCSRA |= (1<<U2X);
	UCSRC &= ~(1<<UCPOL);  //Clock polarity bit
	break;
		
 case 2: //Synchronous mode
	UCSRC |= (1<<UMSEL);  //Set bit 6 UMSEL and set clock polarity
	UCSRC |= (1<<UCPOL);
	break;
}

//Set stop bits
if(stopbits == 0)
{   
 UCSRC &= ~(1<<USBS);      // 1 stopbit
}
else UCSRC |= (1<<USBS);   //2 stopbits

//Set parity bit settings
switch(parity)
{
 case 0: // Parity disabled
	UCSRC &= ~(1<<UPM1);	//UPM1:0=0
	UCSRC &= ~(1<<UPM0);
	break;

 case 1: // Even parity
	UCSRC |= (1<<UPM1);    //UPM1:0 = 2
	UCSRC &= ~(1<<UPM0);
	break;

 case 2: // Odd parity
	UCSRC |= (1<<UPM1);    //UPM1:1 = 3
	UCSRC |= (1<<UPM0);
	break;
}

//Set baudrate
UCSRC &= ~(1<<URSEL);
switch(baudrate)
{
 case 2400:
	   UBRRL = 0xA0;
           UBRRH = 0x01;
           break;

 case 4800:
	   UBRRL = 0xCF;
	   UBRRH = 0x00;
           break;

 case 9600:
	   UBRRL = 0x67;
	   UBRRH = 0x00;
           break;

 case 14400:
	    UBRRL = 0x44;
	    UBRRH = 0x00;
	    break;

 case 19200:
	    UBRRL = 0x33;
	    UBRRH = 0x00;
	    break;

 case 28800:
	    UBRRL = 0x22;
	    UBRRH = 0x00;
	    break;

 case 38400:
	    UBRRL = 0x19;
            UBRRH = 0x00;
	    break;

 case 57600:
	    UBRRL = 0x10;
            UBRRH = 0x00;
	    break;    	
 
 case 768000:
	     UBRRL = 0x0C;
             UBRRH = 0x00;
	     break;    	

 case 115200:
 	     UBRRL = 0x08;
             UBRRH = 0x00;
	     break;
    	
 case 230400:
	     UBRRL = 0x03;
	     UBRRH = 0x00;
	     break;
    	
 case 250000:
	     UBRRL = 0x03;
	     UBRRH = 0x00;
	     break;

 case 1000000:
	      UBRRL = 0x00;
	      UBRRH = 0x00;
	      break; 
}

//Set data format
UCSRC|= (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);  

 return 0;
}
