function txt=%operatio_string(O)
//overloading function for "operation" type tlist string function
//this is a node of the AST
//fields:
//     operands: a list
//     operator: a string
if O.operator <> 'rc' & O.operator <> 'cc'
  txt=['Operation'
       '   Operands:'
       '      '+objectlist2string(O.operands)
       '   Operator: '+O.operator
       'EndOperation'
      ]
elseif O.operator == 'rc'
  txt=['   Operands:'
       '      '+objectlist2string(O.operands)
       'Endrc'
      ]
elseif O.operator == 'cc'
  txt=['   Begin:'
       '      '+objectlist2string(O.operands)
       'Endcc'
      ]
end
endfunction
