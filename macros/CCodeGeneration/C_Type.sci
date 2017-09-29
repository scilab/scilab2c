function OutC_Type = C_Type(ArgType)
// function OutC_Type = C_Type(ArgType)
// -----------------------------------------------------------------
// //NUT: add description here
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);

if (ArgType == 's')
   OutC_Type = 'float';
elseif (ArgType == 'd')
   OutC_Type = 'double';
elseif (ArgType == 'c')
   OutC_Type = 'floatComplex';
elseif (ArgType == 'z')
   OutC_Type = 'doubleComplex';
elseif (ArgType == 'i')
   OutC_Type = 'int';
elseif (ArgType == 'g')
   OutC_Type = 'char';
elseif (ArgType == 'f')
   OutC_Type = 'FILE *';
elseif (ArgType == 'u8')
   OutC_Type = 'uint8';
elseif (ArgType == 'i8')
   OutC_Type = 'int8';
elseif (ArgType == 'u16')
   OutC_Type = 'uint16';
elseif (ArgType == 'i16')
   OutC_Type = 'int16';
elseif (ArgType == 'u32')
   OutC_Type = 'uint32';
elseif (ArgType == 'i32')
   OutC_Type = 'int32';
elseif (ArgType == 'fn') //This type introduced for ODE function,
   // as it's one of the inout argument is  name of the other function 
   OutC_Type = '';
elseif (ArgType ==  'mt')
   OutC_Type = 'Mat'
elseif (ArgType == 'ss') 
   OutC_Type = 'double'
   //This type is introduced for storing state space systems. 
   //It is a matrix of size (n+k)*(n+m+1), for n states, m inputs,
   //k outputs. It stores matrices A,B,C,D and initial state in following form
   //    | A B X0 |
   //    | C D 0  |
   	   
else
   error(9999, 'Unknown Argument Type: ""'+ArgType+'"".');
end
endfunction
