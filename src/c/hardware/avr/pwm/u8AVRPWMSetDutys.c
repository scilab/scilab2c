// Function to set duty for PWM of AVR
//
// Calling Sequence
//     u8AVRPWMSetDutys(uint8 timer, uint8 duty)
//
// Parameters
//     timer: timer to be used for PWM generation (0,1,2)
//     duty: duty for PWM waveform (0-100)
//         
// Description
//	   This function sets duty for PWM waveform according to given parameters.
//
// Examples
//     u8AVRPWMSetDutys(0,10)   //Sets 10% duty for timer 0 output.
//
// Authors
//     Siddhesh Wani
//

#include "AVRPeripheralPWM.h"

void u8AVRPWMSetDutys(uint8 timer, uint8 duty)
{
	uint8 duty_value=0;

	switch(timer)
	{
		case 0:
				duty_value = (uint8)(((uint16)(duty * 0xff))/100);
				OCR0 = duty_value;
				break;
		case 2:
				duty_value = (uint8)(((uint16)(duty * 0xff))/100);
				OCR2 = duty_value;
				break;
	}
  

}
