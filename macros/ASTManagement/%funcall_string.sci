function txt=%funcall_string(F)
//overloading function for "funcall" type tlist string function
//this is a node of the AST
//fields:
//    rhs  : a list
//    name : string, the name of the function
//    lhsnb: number, the number of function lhs
// Modified By: Ukasha Noor


if F.name <> 'disp'
txt=['Funcall  : '+F.name
     '  #lhs   : '+string(F.lhsnb)
     '  Rhs    : '
     '      '+objectlist2string(F.rhs)
     'EndFuncall'
    ]
else
txt=['Funcall  : '+F.name
     '  #lhs   : '+'0'
     '  Rhs    : '
     '      '+objectlist2string(F.rhs)
     'EndFuncall'
    ]
end
endfunction
