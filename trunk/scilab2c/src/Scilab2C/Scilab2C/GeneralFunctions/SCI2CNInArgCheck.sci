function SCI2CNInArgCheck(NInArgs,MinNArgs,MaxNArgs)
// function SCI2CNInArgCheck(NInArgs,MinNArgs,MaxNArgs)
// -----------------------------------------------------------------
//
// Status:
// 23-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato
// -----------------------------------------------------------------

if ((NInArgs < MinNArgs) | (NInArgs > MaxNArgs))
   SCI2Cerror('Incorrect number of input arguments.');
end


endfunction
