function type_out = FA_TP_USER(PrecisionSpecifier,DefaultType)
// function type_out = FA_TP_USER(PrecisionSpecifier,DefaultType)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

if (mtlb_strcmp(PrecisionSpecifier,'int'))
   type_out = 'i';
elseif (mtlb_strcmp(PrecisionSpecifier,'float'))
   type_out = 's';
elseif (mtlb_strcmp(PrecisionSpecifier,'double'))
   type_out = 'd';
elseif (mtlb_strcmp(PrecisionSpecifier,'default'))
   type_out = DefaultType;
else
   SCI2Cerror('Unknown precision function: ""'+AnnotationFnc+'"".');
end
endfunction
