function OutString = squeezestrings(InStringArray)
// function OutString = squeezestrings(InStringArray)
// -----------------------------------------------------------------
//
// Status:
// 12-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

OutString = [];
for counterstrings = 1:max(size(InStringArray))
   OutString = OutString+InStringArray(counterstrings);
end

endfunction
