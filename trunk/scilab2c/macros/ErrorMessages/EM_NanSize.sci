function EM_NanSize(ReportFileName)
// function EM_NanSize(ReportFileName)
// -----------------------------------------------------------------
//
// Input data:
// //NUT: Add description here
//
// Output data:
// //NUT: Add description here
//
// Status:
// 13-Feb-2008 -- Raffaele Nutricato: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);

PrintStringInfo(' ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Cannot initialize a local or global variable with a variable value',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: coming from a function or an operation.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: See code below:',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: a = 10;',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: b = 10;',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: c = a+b;',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: D = zeros(a,b);  // Allowed',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: E = zeros(10,b); // Allowed',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: F = zeros(10,5); // Allowed',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: G = zeros(10,c); // Not Allowed because c value is not known at transation time.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: H = 10:c:9;// Not Allowed because c value is not known at transation time.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: The same problem arises in for loops.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: SCI2C forbids use of step values in ""for"" loops which come from ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: a function or an operation.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Always specify its value.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Example: ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Scilab Code:',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: unkstep = 2*cos(0); // It means that unkstep is not known at translation time.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: for cnt=10:unkstep:1',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    disp(cnt)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: end',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: The code above is not allowed. You can change it as shown below:',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: unkstep = 2; // This time the value of unkstep is known at translation time.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: for cnt=10:unkstep:1',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    disp(cnt)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: end',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: The reason for this limitation is related to the impossibility to generate optimized C code.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: when the step is unknown.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Look at the following example for more details,',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Scilab Code:;',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: for cnt=10:unkstep:1',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    disp(cnt)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: end',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: If unkstep variable value is unkwnown it is not possible to generate',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: optimized C code.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Infact, if unkstep is >= 0, the correct C code is:',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: for (cnt=10;cnt<=1;cnt+=unkstep)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    disp(cnt);',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: If unkstep is < 0 the correct C code is:',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: for (cnt=10; cnt>=1; cnt+=unkstep)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    disp(cnt);',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Note how the condition cnt<=1 changes to cnt>=1.',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: In order to take into account of this possibility ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: SCI2C translator should generate both codes and then ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: insert them into an if/else block as shown here: ',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: if (unkstep >= 0)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: {',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    for (cnt=10;cnt<=1;cnt+=unkstep)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: disp(cnt);',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: }',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: else{',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: {',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR:    for (cnt=10;cnt<=1;cnt+=unkstep)',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: disp(cnt);',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: }',ReportFileName,'both','y');
PrintStringInfo('SCI2CERROR: Of course it is not optimized C code.',ReportFileName,'both','y');
PrintStringInfo(' ',ReportFileName,'both','y');
SCI2Cerror(9999, 'SCI2CERROR: Cannot initialize a local or global variable with a variable value coming from a function or an operation.');
endfunction
