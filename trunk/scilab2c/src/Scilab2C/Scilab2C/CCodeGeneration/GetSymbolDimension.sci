function symboldimension = GetSymbolDimension(Field_Size)
// function symboldimension = GetSymbolDimension(Field_Size)
// -----------------------------------------------------------------
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

Nelem = max(size(Field_Size));
if (Nelem < 2)
   SCI2Cerror('The size of a symbol cannot be expressed with one or zero numbers.');
end
for countersize = 1:Nelem
   if (SCI2Cisnum(Field_Size(countersize)))
      tmpnum = eval(Field_Size(countersize));
      if (tmpnum == 0)
         SCI2Cerror('Found a symbol that has zeros elements. 0xN or Nx0 matrices are not allowed.');
      elseif (tmpnum == 1)
         Field_Type(countersize) = 0;
      else
         Field_Type(countersize) = 1;
      end
   else
     Field_Type(countersize) = 1;
   end
end

Sum_Field_Type = sum(Field_Type);
if (Sum_Field_Type == 0)
   symboldimension = 0;
elseif (Sum_Field_Type == 1)
   symboldimension = 2;
else
   symboldimension = 2;
end

endfunction
