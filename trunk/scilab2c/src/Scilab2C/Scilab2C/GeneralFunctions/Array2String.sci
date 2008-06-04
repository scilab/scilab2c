function [StringArray] = Array2String(InArray);
// function [StringArray] = Array2String(InArray);
// -----------------------------------------------------------------
//
// Status:
// 13-May-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

[Nrows,Ncols] = size(InArray);

StringArray = '[';
for counterrows = 1:Nrows
   for countercols = 1:Ncols
      StringArray = StringArray + string(InArray(counterrows,countercols)) + ',';
   end
   StringArray = part(StringArray,1:(length(StringArray)-1)); // Remove the last ','
   StringArray = StringArray+';';
end
StringArray = part(StringArray,1:(length(StringArray)-1)); // Remove the last ';'
StringArray = StringArray+']';
endfunction
