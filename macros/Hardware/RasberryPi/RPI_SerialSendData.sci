// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_SerialSendData(fd, data)
// Function to send data through serial port. Data can be of any datatype and
// can be scalar or matrix 
//
// Calling Sequence
//	   RPI_SerialSendData(fd, data)
//
// Parameters
//     fd : file descriptor for opened port
//	   data: data to be sent
// Description
//     This functions sends input data on specified serial port
// Examples
//	   A = [2 3; 4 5]
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//	   RPI_SerialSendData(serial1, A);
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
