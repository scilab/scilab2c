function fidnumber = SCI2COpenFileRead(filename)
// function fidnumber = SCI2COpenFileRead(filename)
// --------------------------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

[fidnumber,fiderror] = mopen(filename,'r'); 
if (fiderror < 0)
   SCI2Cerror(['Cannot open (in read mode): '+filename]);
end

endfunction
