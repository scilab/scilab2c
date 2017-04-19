// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_SerialSendChar(fd, data)
// Function to send 8-bit char through serial port. 
//
// Calling Sequence
//	   RPI_SerialSendChar(fd, data)
//
// Parameters
//     fd : file descriptor for opened port
//	   data: 8-bit character data to be sent
// Description
//     This functions sends input 8-bit character data on specified serial port
// Examples
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//	   RPI_SerialSendChar(serial1, 'H');
//	   RPI_SerialSendChar(serial1, 'i');
//	   RPI_SerialClose(serial1); 
//
// See also
//     RPI_SerialOpen RPI_SerialClose
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
