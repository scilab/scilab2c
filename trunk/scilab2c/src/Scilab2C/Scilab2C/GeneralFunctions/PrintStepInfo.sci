function PrintStepInfo(inputstring,filename,outputtype)
// function PrintStepInfo(inputstring,filename,outputtype)
// -----------------------------------------------------------------
// #RNU_RES_B
// Prints a string by using a predefined format into a file or on 
// the stdout.
//
// Input data:
// filename: optional parameter, that specifies the output file.
//           If filename is '' or it is not provided to the function,
//           the string will be printed on the stdout.
// outputtype: 'file' -> prints only on file.
//             'stdout' -> prints only on the stdout.
//             'both' -> prints on both file and stdoud.
//             Default is 'stdout'.
// Output data:
//
// #RNU_RES_E
// Status:
// 02-Jan-2006 -- Nutricato Raffaele: Author.
// 02-Jan-2006 -- Nutricato Raffaele: TEST OK.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,3);


if argn(2) < 3
	bothout = 'n';
   if argn(2) < 2
	   filename = '';
   end
end
if (length(filename) == 0)
   outputtype = 'stdout'; // Prints only on the stdout.
end

Nstars = length(inputstring);
starstring = [];
for counterstars = 1:Nstars
   starstring = starstring+'*';
end
blankstring = ['         '];

if ((outputtype=='both') | (outputtype=='stdout'))
   // disp(' ')
   // disp(' ')
   disp(blankstring+'    '+starstring);
   disp(blankstring+'==> '+inputstring);
   disp(blankstring+'    '+starstring);
   // disp(' ')
end

if ((outputtype=='both') | (outputtype=='file'))
   filenamefprintf(filename,'y',' ');
   filenamefprintf(filename,'y',' ');
   filenamefprintf(filename,'y',blankstring+'    '+starstring);
   filenamefprintf(filename,'y',blankstring+'==> '+inputstring);
   filenamefprintf(filename,'y',blankstring+'    '+starstring);
   filenamefprintf(filename,'y',' ');
end
endfunction
