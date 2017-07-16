// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function fd = RPI_SerialSetup(port, baudrate)
// Function to setup serial port. 
//
// Calling Sequence
//	   RPI_SerialSetup(port, baudrate)
//
// Parameters
//     port : port of RPi to be used (eg. ) 
//     direction : direction to be set for pin (0 -> INPUT, 1 -> OUTPUT)
//	   fd : file descriptor for opened port, -1 for error
// Description
//     This functions opens the specified serial port and returns file descriptor
//	   for the same 
// Examples
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//
// See also
//     RPI_SerialClose RPI_SerialSendChar
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
fd = 0;
endfunction
