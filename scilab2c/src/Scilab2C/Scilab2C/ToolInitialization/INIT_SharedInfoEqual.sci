function SharedInfo = INIT_SharedInfoEqual(SharedInfo)
// function SharedInfo = INIT_SharedInfoEqual(SharedInfo)
// -----------------------------------------------------------------
// Status:
// 13-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

SharedInfo.Equal.Enabled        = 0; // 1 means enabled -> we are inside an equal AST block.      
SharedInfo.Equal.NInArg         = 0;
SharedInfo.Equal.InArg(1).Name  = '';
SharedInfo.Equal.NOutArg        = 0;
SharedInfo.Equal.OutArg(1).Name = '';
SharedInfo.Equal.Lhs            = 0; 
SharedInfo.Equal.Nins           = 0; // Counts the number of ins found in the lhs of the Equal.

endfunction
