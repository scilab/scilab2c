// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pwmWrite(pin,value)
// Function to write voltage value to the PWM register for the given pin.
//
// Calling Sequence
//  RPI_pwmWrite(pin,value)
//
// Parameters
//  pin  : The pin number set the voltage at. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//  value: The voltage to set at the given pin. Range is 0-1024.
//
// Description
//  Writes the value to the PWM register for the given pin. The Raspberry Pi has one on-board PWM pin, pin 1 (BMC_GPIO 18, Phys 12). Other PWM devices may have other PWM ranges.
//
// Examples
//  RPI_pwmWrite(1,500)
// See also
//  RPI_pwmMode, RPI_pwmRange, RPI_pwmClock, RPI_pwmToneWrite
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    if [0<value,value<1024] then
        commande="pwW#2#"+string(pin)+"#"+string(value)+"#";
    else
        error("Voltage has to be between 0 and 1024");
    end
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
