function AVRPWMSetup(timer, prescalar, waveform_mode, output_mode)
// Function to initialise PWM of AVR
//
// Calling Sequence
//     AVRSetupADC(timer, prescalar, waveform_mode, output_mode)
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
// See also
//     AVRPMWSetDuty
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
endfunction
