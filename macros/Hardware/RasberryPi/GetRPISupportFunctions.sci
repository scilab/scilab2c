function RPiSupportFunctions = GetRPISupportFunctions()
// -----------------------------------------------------------------
// Get list of RPI peripherals supported 
//
// Input data:
//    None
//
// Output data:
//    None
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

RPiSupportFunctions = [
						"RPI_DigitalIn"
						"RPI_DigitalOut"
						"RPI_DigitalSetup"
						"RPI_DelayMilli"
						"RPI_DelayMicro"
						"RPI_GetMillis"
						"RPI_GetMicros"
						"RPI_SerialSetup"
						"RPI_SerialClose"
						"RPI_SerialSendChar"
						"RPI_SerialFlush"
						"RPI_SerialGetChar"
						"RPI_ThreadCreate"
						"RPI_PinISR"
						"RPI_HardPWMWrite"
						"RPI_HardPWMSetRange"
						"RPI_HardPWMSetClock"
						"RPI_HardPWMSetMode"
						];

//Note: "RPI_SerialSendData" is removed since distinction between input data 
//types is required


endfunction
