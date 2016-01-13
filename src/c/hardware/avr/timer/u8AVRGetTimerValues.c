// Function to get timer count
//
// Calling Sequence
//     u8AVRGetTimerValues(timer)
//
// Parameters
//     timer: timer whose current count is to be returned (0,1,2)
//     ***Refer datasheet for more description about timer
//              
// Description
//     This function returns the count of timer specified 
//
//
// Authors
//     Siddhesh Wani
//


#include "AVRPeripheralTimer.h"


uint8 u8AVRGetTimerValues(uint8 timer)
{
    switch(timer)
	{
		case 0:
				return TCNT0;
				
		case 1:
				break;
		case 2:
				return TCNT2;
	}	    

	return 0;
}

