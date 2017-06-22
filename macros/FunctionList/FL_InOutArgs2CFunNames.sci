function FunNameCFuncList = FL_InOutArgs2CFunNames(FunctionName,CommaSepCFuncList,CFuncListNElem)
// function FunNameCFuncList = FL_InOutArgs2CFunNames(FunctionName,CommaSepCFuncList,CFuncListNElem)
// -----------------------------------------------------------------
// #RNU_RES_B
// Reads a Comma Separated Function List and converts it into the
// corresponding list of C function. In the Comma Separated
// Function List only input and output arguments are specified
// and they are separated by a comma.
// #RNU_RES_E
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 05-Jan-2008 -- Nutricato Raffaele: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),3,3);

SepChar = ',';
scanned = csvTextScan(CommaSepCFuncList, ",", [], "string");
if size(scanned, 'c') <> 2 then
    disp('Incorrect format for the function list class.');
    error(9999, 'Check the following function list class item: ""'+strcat(CommaSepCFuncList, " ")+'"".');
end

FunNameCFuncList = scanned(:,1)+FunctionName+scanned(:,2);

endfunction
