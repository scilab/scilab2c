function OutputData = SCI2Cflipud(InputData)
// function OutputData = SCI2Cflipud(InputData)
// -----------------------------------------------------------------
//
// Status:
// 12-May-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

NInputs = size(InputData,1);
OutputData = InputData; // To be sure that they will have the same structure.
for cnt = 1:NInputs
   OutputData(cnt) = InputData(NInputs-cnt+1);
end
endfunction
