// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pullControl(pin,RMode)
// Function to change the internal pull up/down resistor setting for a given pin.
//
// Calling Sequence
//  RPI_pullControl(pin,RMode)
//
// Parameters
//  pin : The pin number to act on. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//  RMode: The mode for the internal resistance of the given pin.
//
// Description
//  This sets the pull-up or pull-down resistor mode on the given pin, which should be set as an input using the PRI_pinMode function. The internal pull up/down 
//  resistors have a value of approximately 50KΩ on the Raspberry Pi.
//
//  RMode can take values:
//  <itemizedlist>
//  <listitem>'up'  -> pull to 3.3v</listitem>
//  <listitem>'down'-> pull to ground</listitem>
//  <listitem>'none'-> no pull up/down</listitem>
//  </itemizedlist>
//
//  This function has no effect on the Raspberry Pi’s GPIO pins when in sys mode, set using RPI_pinNumbering function. To activate a pull-up/pull-down, use the gpio 
//  program in a script before starting the program.
//
// Examples
//  RPI_pullControl(0,'down')
// See also
//  RPI_pinNumbering, RPI_pinMode
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    if RMode=='up' then
        commande="plC#2#"+string(pin)+"#2#";
    elseif RMode=='down' then
        commande="plC#2#"+string(pin)+"#1#";
    elseif RMode=='none' then
        commande="plC#2#"+string(pin)+"#0#";
    else
        error("mode should be one of up/down/none");
    end
    if getos()=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
