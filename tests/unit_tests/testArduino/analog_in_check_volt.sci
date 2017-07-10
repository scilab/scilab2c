function analog_in_check_volt()
    val = cmd_analog_in_volt(1,0)
    cmd_analog_out_volt(1,6,val)
endfunction
