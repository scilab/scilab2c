// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_SerialClose(fd)
// Function to close serial port specified by file descriptor. 
//
// Calling Sequence
//	   RPI_SerialClose(fd)
//
// Parameters
//	   fd : file descriptor for opened port
// Description
//     This functions closes the specified serial port 
// Examples
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//	   RPI_SerialClose(serial1)
// See also
//     RPI_SerialOpen RPI_SerialSendChar
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
