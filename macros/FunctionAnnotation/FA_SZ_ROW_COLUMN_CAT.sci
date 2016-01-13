function outsize = FA_SZ_ROW_COLUMN_CAT(inval,in1size,in2size)


//Check the input arguments
SCI2CNInArgCheck(argn(2),3,3);
in1size = string(in1size);
in2size = string(in2size);
inval = string(inval);
if(inval == '1') then
    in1num_r = eval(in1size);
    in2num_r = eval(in2size);
    outsize(1) = string(in1num_r + in2num_r);
    outsize(2) = string(in2num_r);
elseif(inval == '2') then
    in1num_c = eval(in1size);
    in2num_c = eval(in2size)
    outsize(1) = string(in1num_c);
    outsize(2) = string(in1num_c + in2num_c);
else
     error(36, "Wrong input argument '+inval+'. Use 1 or 2 as first argument in cat command.");
end

endfunction 
