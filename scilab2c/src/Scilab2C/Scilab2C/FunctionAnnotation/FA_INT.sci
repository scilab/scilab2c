function opout = FA_INT(in1)
// function opout = FA_INT(in1)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

if (SCI2Cisnum(in1))
   outnum = int(eval(in1));
   if isnan(outnum)
      opout  = '__SCI2CNANSIZE';
   else
      opout  = string(outnum);
   end
else
   opout  = in1;
end   
endfunction
