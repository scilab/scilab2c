function SizeIn = SizeInByte(InDataType);
// function SizeIn = SizeInByte(InDataType);
// -----------------------------------------------------------------
// Returns the size in bytes of the input data type.
//
// Input data:
// InDataType: input data type. It can be: 
//    'float'   
//    'double'
//    'floatComplex*'
//    'doubleComplex*'
//
// Output data:
// SizeIn: size in bytes of the input data type.
//
// Status:
// 12-May-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

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
