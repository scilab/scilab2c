function ArduinoFunctions = GetArduinoFunctions()
// -----------------------------------------------------------------
// Get list of Arduino functions supported 
//
// Input data:
//    None
//
// Output data:
//    List of Arduino functions supported
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

ArduinoFunctions = [
		     "cmd_digital_out"
		     "cmd_digital_in"
		     "cmd_analog_out"
		     "cmd_analog_in"
		     "cmd_dcmotor_setup"
		     "cmd_dcmotor_run"
                    "cmd_servo_attach"
                    "cmd_servo_detach"
                    "cmd_servo_move"];

endfunction
