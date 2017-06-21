function C_SCI2CHeader(FileName)
// function C_SCI2CHeader(FileName)
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
// 21-Dec-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);

// -----------------------
// --- Initialization. ---
// -----------------------
// ---------------------------
// --- End Initialization. ---
// ---------------------------


PrintStringInfo('/*',FileName,'file','y');
PrintStringInfo('** ************************************************',FileName,'file','y');
PrintStringInfo('** This file has been generated using',FileName,'file','y');
PrintStringInfo('**      Scilab2C (Version '+getScilab2cVersion()+')',FileName,'file','y');
PrintStringInfo('**',FileName,'file','y');
PrintStringInfo('** Please visit following links for more informations:',FileName,'file','y');
PrintStringInfo('** Atoms Module: http://atoms.scilab.org/toolboxes/scilab2c',FileName,'file','y');
PrintStringInfo('** Scilab2C Forge: http://forge.scilab.org/index.php/p/scilab2c/',FileName,'file','y');
PrintStringInfo('** Scilab2C ML: http://forge.scilab.org/index.php/p/scilab2c/',FileName,'file','y');
PrintStringInfo('** ************************************************',FileName,'file','y');
PrintStringInfo('*/',FileName,'file','y');
PrintStringInfo(' ',FileName,'file','y');
PrintStringInfo(' ',FileName,'file','y');

endfunction
