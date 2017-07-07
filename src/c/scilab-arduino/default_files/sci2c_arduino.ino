/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "Arduino.h"
<<<<<<< HEAD
#include <loop_arduino.h>
#include <setup_arduino.h>
=======
#include "loop_arduino.h"
#include "setup_arduino.h"
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

void setup()
{
    //Please write appropriate setup functions here.
	setup_arduino();
}

void loop()
{
  loop_arduino();
}
