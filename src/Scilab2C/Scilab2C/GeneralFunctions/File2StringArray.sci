function [String_Array,N_Strings] = File2StringArray(InFileName)
// function [String_Array,N_Strings] = File2StringArray(InFileName)
// -----------------------------------------------------------------
//
// Status:
// 10-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);


N_Strings    = 0;
String_Array = '';
fidfile = SCI2COpenFileRead(InFileName);

tmpline = mgetl(fidfile,1);
while (meof(fidfile) == 0)
   N_Strings = N_Strings + 1;
   String_Array(N_Strings) = tmpline;
   tmpline = mgetl(fidfile,1);
end

mclose(fidfile);
endfunction
