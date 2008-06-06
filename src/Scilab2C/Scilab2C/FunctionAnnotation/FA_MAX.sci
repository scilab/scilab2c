function opout = FA_MAX(in1,in2)
// function opout = FA_MAX(in1,in2)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

SCI2Cerror('Not allowed to use FA_MAX in this release.');

if (SCI2Cisnum(in1))
   in1num = eval(in1);
   if (SCI2Cisnum(in2))
      in2num = eval(in2);
      outnum = max(in1num,in2num);
      if isnan(outnum)
         opout  = '__SCI2CNANSIZE';
      else
         opout  = string(outnum);
      end
   else
      if (in1num == 1)
         opout  = string(in2);
      end
   end
else
   opout  = string(in1);
end   
endfunction
