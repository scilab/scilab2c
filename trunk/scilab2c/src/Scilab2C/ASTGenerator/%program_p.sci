function %program_p(p)
  //overloading function for "program" type tlist display
  mprintf("%s\n",string(p))
endfunction

function txt=%program_string(p)
//overloading function for "program" type tlist string function
//main (root) node of the Abstract Formal Tree
//fields: 
//      name      : string (the function name)
//      outputs   : list of "variable" type tlist (the output arg names)
//      inputs    : list of "variable" type tlist (the intput arg names)
//      statements: list of "equal" type tlist and list('EOL') (the
//                           instructions list)
//      nblines   : number (the number of lines in the scilab function)
  txt=['Program'
       'Name   : '+p.name
       'Outputs: '+strcat(objectlist2string(p.outputs),' ')
       'Inputs : '+strcat(objectlist2string(p.inputs),' ')
       'Statements '
       '    '+objectlist2string(p.statements)
       'EndProgram'
      ]
endfunction


function txt=%equal_string(e)
//overloading function for "equal" type tlist string function
//this is a node of the AST

//fields:
//   expression: "expression" type tlist (the right hand side)
//   lhs       : list of "variable" type tlist and "operation" type tlist //   (the assignment)
//   endsymbol : string (the orginal end-of-instruction symbol (, ; <CR>))
  txt=['Equal'
       '  Expression: '
       '    '+string(e.expression)
       '  Lhs       : '
       '     '+objectlist2string(e.lhs)
       'EndEqual'
      ]
endfunction


function txt=%for_string(F)
//overloading function for "for" type tlist string function
//this is a node of the AST
//fields:  
//   expression : "expression" type tlist (the loop expression)
//   statements : list of "equal" type tlist and list('EOL') (the
//                           for instructions list)
  txt=['For'
       '  Expression:'
       '    '+string(F.expression)
       '  Statements:'
       '    '+objectlist2string(F.statements)
       'EndFor']
endfunction

function txt=%ifthenel_string(I)
//overloading function for "ifthenel" type tlist string function
//this is a node of the AST
//fields:  
//    expression  : "expression" type tlist (the if expression)
//    then        : list of "equal" type tlist and list('EOL') (the
//                           then instructions list)
//    elseifs     : a list of tlists
//    else        : list of "equal" type tlist and list('EOL') (the
//                           else instructions list)
  txt=['If '
       '  Expression:' 
       '     '+string(I.expression)
       '  If Statements'
       '    '+objectlist2string(I.then)]
  for e=I.elseifs
    txt=[txt;
	 "  Else If Expression'
	 '     '+string(e.expression)
	 '  Else If Statements'
       '    '+objectlist2string(e.then)]
  end
  txt=[txt;
       "  Else Statements'
       '    '+objectlist2string(I.else)
       'EndIf']
endfunction

function txt=%operatio_string(O)
//overloading function for "operation" type tlist string function
//this is a node of the AST
//fields:   
//     operands: a list
//     operator: a string
  txt=['Operation'
       '   Operands:'
       '      '+objectlist2string(O.operands)
       '   Operator: '+O.operator
       'EndOperation'
      ]
endfunction

function txt=%funcall_string(F)
//overloading function for "funcall" type tlist string function
//this is a node of the AST
//fields:     
//    rhs  : a list
//    name : string, the name of the function
//    lhsnb: number, the number of function lhs

txt=['Funcall  : '+F.name
     '  #lhs   : '+string(F.lhsnb)
     '  Rhs    : '
     '      '+objectlist2string(F.rhs)
     'EndFuncall'
    ]
endfunction

function txt=%variable_string(v)
//overloading function for "variable" type tlist string function
//fields: name  
//this is a leaf of the AST
  txt=v.name
endfunction

function txt=%cste_string(c)
//overloading function for "cste" type tlist string function
//this is a leaf of the AST
//fields: 
//    value : a number or a string
  txt=string(c.value)
endfunction

function txt=%comment_string(e)
//overloading function for "comment" type tlist string function
//fields:
//  text: a string
//this is a leaf of the AST
  txt=['Comment : '+e.text]
endfunction

function txt=objectlist2string(L)
//auxiliary function for conversion of a list of objects
//into a string vector
  txt=[];
  for o=L,
    if type(o)==15 then //EOL case
      txt=[txt;'<'+o(1)+'>'],
    else
      txt=[txt; string(o)],
    end
  end
  if txt==[] then txt='<empty>',end
endfunction
