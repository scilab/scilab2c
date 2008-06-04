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
//NUT: raf cambiato ForExpression e ForStatements
  txt=['For'
       '  ForExpression:'
       '    '+string(F.expression)
       '  ForStatements:'
       '    '+objectlist2string(F.statements)
       'EndFor']
endfunction

function txt=%while_string(W)
//overloading function for "while" type tlist string function
//this is a node of the AST
//fields:  
//   expression : "expression" type tlist (the loop expression)
//   statements : list of "equal" type tlist and list('EOL') (the
//                           while instructions list)
  txt=['While'
       '  WhileExpression:'
       '    '+string(W.expression)
       '  WhileStatements:'
       '    '+objectlist2string(W.statements)
       'EndWhile']
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
	 '  Else If Expression'
	 '     '+string(e.expression)
	 '  Else If Statements'
       '    '+objectlist2string(e.then)]
  end
  txt=[txt;
       '  Else Statements'
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
  global anscounter; //NUT: just to fix problem with ans variables.
//overloading function for "variable" type tlist string function
//fields: name  
//this is a leaf of the AST
//NUT: changed here. For me %i is a number not a variable.
  if (v.name == "%T" | ...
      v.name == "%F"| ...
      v.name == "%nan"| ...
      v.name == "%inf"| ...
      v.name == "%pi")
      txt=['Number_x: '+v.name];
   elseif (v.name == "%i")
      txt=['Number_X: '+v.name];
   else
     if (v.name == 'ans')
        anscounter = anscounter + 1;
        txt=['Variable: '+v.name+string(anscounter)];
     else
        txt=['Variable: '+v.name];
     end
  end
endfunction

function txt=%cste_string(c)
//overloading function for "cste" type tlist string function
//this is a leaf of the AST
//fields: 
//    value : a number or a string
//NUT: added cste I also need "" for strings in order to be sure that the blanks are
//NUT: correctly considered and not mistaken with additional blanks present in the ast text file.
  stringcvalue = string(c.value);
  if (stringcvalue == "%T"     | ...
      stringcvalue == "%F"     | ...
      stringcvalue == "%nan"     | ...
      stringcvalue == "%inf"     | ...
      stringcvalue == "%pi")
     txt=['Number_x: '+stringcvalue];
  elseif (SCI2Cisnum(stringcvalue))
     //NUT needed to convert format 1D-14 into 1d-14
     txt=['Number_x: '+strsubst(stringcvalue,'D','e')];
  elseif (stringcvalue == "%i")
     txt=['Number_X: '+stringcvalue];
  else
     txt=['String: ""'+stringcvalue+'""'];     
  end
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
