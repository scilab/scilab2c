function txt=%funcall_string(F)
//overloading function for "funcall" type tlist string function
//this is a node of the AST
//fields:
//    rhs  : a list
//    name : string, the name of the function
//    lhsnb: number, the number of function lhs

<<<<<<< HEAD
if F.name <> 'disp'
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
txt=['Funcall  : '+F.name
     '  #lhs   : '+string(F.lhsnb)
     '  Rhs    : '
     '      '+objectlist2string(F.rhs)
     'EndFuncall'
    ]
<<<<<<< HEAD
else
txt=['Funcall  : '+F.name
     '  #lhs   : '+'0'
     '  Rhs    : '
     '      '+objectlist2string(F.rhs)
     'EndFuncall'
    ]
end
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
endfunction
