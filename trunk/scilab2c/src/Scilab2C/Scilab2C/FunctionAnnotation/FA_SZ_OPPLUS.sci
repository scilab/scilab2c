function opoutsize = FA_SZ_OPPLUS(in1size,in2size,in1type,in2type)
// function opoutsize = FA_SZ_OPPLUS(in1size,in2size,in1type,in2type)
// -----------------------------------------------------------------
// Status:
// 08-Dec-2007 -- Raffaele Nutricato: Author.
// 08-Dec-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),4,4);

in1size = string(in1size);
in2size = string(in2size);
in1type = string(in1type);
in2type = string(in2type);
in1dim = GetSymbolDimension(in1size);

if ((in1type ~= 'g') & (in2type ~= 'g'))
   opoutsize = FA_SZ_OPPLUSA(in1size,in2size);
elseif ((in1type == 'g') & (in2type == 'g'))
   opoutsize(1) = '1';
   if (SCI2Cisnum(in1size(1)) & SCI2Cisnum(in2size(1)))
      in1num = eval(in1size(1));
      in2num = eval(in2size(1));
      if (in1num > 1 | in2num > 1)
         SCI2Cerror('String catenation can be performed only on strings of 1 x N size not N x 1 size');
      end
   end
   if (SCI2Cisnum(in1size(2)) & SCI2Cisnum(in2size(2)))
      in1num = eval(in1size(2));
      in2num = eval(in2size(2));
      opoutsize(2) = string(in1num+in2num-1);
      if isnan(opoutsize(2))
         opoutsize(2) = '__SCI2CNANSIZE';
      else
         opoutsize(2) = string(opoutsize(2));
      end
   else  
      opoutsize(2) = string(in1size(2))+'+'+string(in2size(2))+'-1';
   end
else
   SCI2Cerror('Unexpected type combination for ""+"" operator (type1,type2): ('+in1type+in2type+').');
end

endfunction
