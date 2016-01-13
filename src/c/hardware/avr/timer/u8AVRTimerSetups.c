// Function to setup timer on AVR
//
// Calling Sequence
//     u8AVRTimerSetups(timer, prescalar)
//
// Parameters
//     timer: timer to be set up (0,1,2)
//     prescalar: prescalar to be used for timer (0-7)
//     ***Refer datasheet for more description about timer
//              
// Description
//     This function sets prescalr for timers. 'timer' decides which of the 
//     three (0,1,2) timers available to be used. The 'prescalar' is needed for 
//     deciding timer clock. Select appropriate prescalar depending on MCU clock
//     and requirement.
//
//
// Authors
//     Siddhesh Wani
//


#include "AVRPeripheralTimer.h"


uint8 u8AVRTimerSetups(uint8 timer,uint8 prescalar)
{
    switch(timer)
	{
		case 0:
				TCCR0|= (prescalar & 0x07);  //Select clock source
				break;
		case 1:
				break;
		case 2:
				TCCR2|= (prescalar & 0x07);  //Select clock source
				break;
	}	    

	return 0;
}

