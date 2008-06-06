function SizeIn = SizeInByte(InDataType)
// function SizeIn = SizeInByte(InDataType)
// -----------------------------------------------------------------
// Status:
// 12-May-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

if (InDataType == 'float')
   SizeIn = 4;
elseif (InDataType == 'double')
   SizeIn = 8;
elseif (InDataType == 'floatComplex*')
   SizeIn = 8;
elseif (InDataType == 'doubleComplex*')
   SizeIn = 16;
else
   error('Unknown data type: '+InDataType);
end
endfunction
