function opout = FA_TP_MAX(in1,in2)
// function opout = FA_TP_MAX(in1,in2)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,2);


if (argn(2)==1) then
select (in1),
	case 's' then opout = 'c'
	case 'c' then opout = 'c'
	else opout = 'z',
end
end


if (argn(2)==2) then 
in1Pin2 = in1+in2;
opout = in1;

if (in2 == 'z')
   opout = 'z';
elseif (in1Pin2 == 'sd')
   opout = 'd';
elseif (in1Pin2 == 'sc')
   opout = 'c';
elseif (in1Pin2 == 'dc')
   opout = 'z';
end
end

endfunction
