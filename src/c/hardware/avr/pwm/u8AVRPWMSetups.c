// Function to initialise PWM of AVR
//
// Calling Sequence
//     u8AVRPWMSetups(uint8 timer, uint8 prescalar, uint8 waveform_mode, uint8 output_mode)
//
// Parameters
//     timer: timer to be used for PWM generation (0,1,2)
//     prescalar: prescalar to be used for generating PWM waveform (0-7)
//     waveform_mode: decides type of waveform generation
//              0 -> Normal mode
//              1 -> Phase correct mode
//              2 -> CTC mode
//              3 -> Fase PWM mode
//	   output_mode: decides the compare output mode. (0-3)
//					behaviour of the output is different for different inputs 
//					depending upon 'waveform_mode' chosen. 
//     ***Refer datasheet for more description about above modes
//              
// Description
//     This function initialises PWM of AVR with given parameters. 'timer' 
//     decides which of the three (0,1,2) timers available to be used. The 
//     'prescalar' is needed for deciding PWM clock. Select appropriate prescalar
// 	   depending on MCU clock. Choose required pwmmode using 'waveform_generation'
//     and 'output_mode'. Please refer datasheet for more description of 'wafefom_mode'
//     and 'output mode'.
// Examples
//     AVRPWMSetup(0,1,2,2)
//
// Authors
//     Siddhesh Wani
//

#include "AVRPeripheralPWM.h"


void u8AVRPWMSetups(uint8 timer, uint8 prescalar, uint8 waveform_mode, uint8 output_mode)
{
	switch(timer)
	{
		case 0:
				TCCR0|= (prescalar & 0x07);  //Select clock source
				//Select waveform generation mode
				TCCR0|= ((waveform_mode & 0x04) << 4);  
				//Select compare output mode
				TCCR0 |= ((output_mode & 0x01) << 3);  //WGM0
				TCCR0 |= ((output_mode & 0x02) << 6);  //WGM1
				break;
		case 1:
				break;
		case 2:
				TCCR2|= (prescalar & 0x07);  //Select clock source
				//Select waveform generation mode
				TCCR2|= ((waveform_mode & 0x04) << 4);  
				//Select compare output mode
				TCCR2 |= ((output_mode & 0x01) << 3);  //WGM0
				TCCR2 |= ((output_mode & 0x02) << 6);  //WGM1
				break;
	}	    
}

