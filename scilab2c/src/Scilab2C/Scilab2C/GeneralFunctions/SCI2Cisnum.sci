function outbool = SCI2Cisnum(instring)
// function outbool = SCI2Cisnum(instring)
// -----------------------------------------------------------------
// Status:
// 12-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

instring = convstr(instring,'l');
outbool   = isnum(instring);
firstchar = part(instring,1:1);
if (firstchar == 'd' | firstchar == 'e')
   outbool = %F;
end
endfunction
