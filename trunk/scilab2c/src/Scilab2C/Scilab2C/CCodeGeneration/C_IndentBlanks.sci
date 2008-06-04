function OutBlanksString = C_IndentBlanks(IndentLevel)
// function OutBlanksString = C_IndentBlanks(IndentLevel)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

OutBlanksString = '';
BlanksPerLevel  = '   ';
for cntind = 1:IndentLevel
   OutBlanksString = OutBlanksString + BlanksPerLevel;
end

endfunction
