function RPiSupportFunctions = GetRPISupportFunctions()
// -----------------------------------------------------------------
// Get list of RPI peripherals supported 
//
// Input data:
//    None
//
// Output data:
//    None
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//
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
