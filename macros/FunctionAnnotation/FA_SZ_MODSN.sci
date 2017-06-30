function outt=FA_SZ_MODSN(in1sz)

in1sz=string(in1sz);
in1s=eval(in1sz)
if(in1s>1) then
	outt=string(in1s);
else
	outt=string(1);
end

endfunction
