function blink_13()
    cmd_digital_out(1,13,1)         //--To turn on the LED on pin no. 13
    sleep(1000)			    //---delay of 1 second
    cmd_digital_out(1,13,0)         //--To turn on the LED off pin no. 13
    sleep(1000) 		    //---delay of 1 second
endfunction
