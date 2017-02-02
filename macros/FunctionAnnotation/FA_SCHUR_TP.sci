function out2tp = FA_SCHUR_TP(in2tp)

in2type = string(in2tp);

if(in2type == 'g')
	out2tp = 'd'
else
	out2tp = in2type
end
endfunction 
