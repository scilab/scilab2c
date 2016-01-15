function AVRTimerSetup(timer, prescalar)
// Function to set the prescalar for timer.
//
// Calling Sequence
//     AVRTimerSetup(timer, prescalar)
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
// Examples
//     AVRTimerSetup(0,1)   //Timer 0 with no scaling
//
// See also
//     AVRGetTimerValue
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
endfunction
