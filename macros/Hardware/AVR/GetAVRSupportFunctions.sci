function AVRSupportFunctions = GetAVRSupportFunctions()
// -----------------------------------------------------------------
// Get list of AVR peripherals supported 
//
// Input data:
//    None
//
// Output data:
//    None
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

AVRSupportFunctions = [
						"AVRADCSetup"
						"AVRDigitalIn"
						"AVRDigitalOut"
						"AVRDigitalSetup"
						"AVRGetTimerValue"
						"AVRPWMSetDuty"
						"AVRPWMSetup"
						"AVRReadADC"
						"AVRTimerSetup"];

endfunction
