function opout = FA_SZ_SEL2(in1,in2)
// function opout = FA_SZ_SEL2(in1,in2)
// -----------------------------------------------------------------
//
// Status:
// 16-Mar-2008 -- Raffaele Nutricato: Author.
// 16-Mar-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);
ReportFileName = '';
in2 = string(in2);

if (in2 == '1')
   opout = in1;
elseif (in2 == '2')
   opout = '1';
else   
   PrintStringInfo(' ',ReportFileName,'both','y');
   PrintStringInfo('SCI2CERROR: Cannot associate the second input argument to a known specifier.',ReportFileName,'both','y');
   PrintStringInfo('SCI2CERROR: Please rearrange your code by using one of the following specifiers:',ReportFileName,'both','y');
   PrintStringInfo('SCI2CERROR: 1 or 2.',ReportFileName,'both','y');
   PrintStringInfo(' ',ReportFileName,'both','y');
   SCI2Cerror(' ');
end
endfunction
