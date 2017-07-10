function digital_in_check()
    a=cmd_digital_in(1,7)
    if a==1 then
        cmd_digital_out(1,13,1)
        cmd_digital_out(1,9,0)
    else
        cmd_digital_out(1,9,1)
	cmd_digital_out(1,13,0)
    end
endfunction
