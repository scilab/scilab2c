function outp=FA_FSFIRLIN_SZ(in1sz2)
    in1sz2=string(in1sz2);
    in1sz=eval(in1sz2);
    if(int(in1sz/2)==in1sz/2)  then
        outp=string(4*in1sz+1);
    else
        outp=string(4*in1sz+3);
    end
endfunction
