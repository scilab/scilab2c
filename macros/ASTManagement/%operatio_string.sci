function txt=%operatio_string(O)
//overloading function for "operation" type tlist string function
//this is a node of the AST
//fields:
//     operands: a list
//     operator: a string
if O.operator <> 'rc' 
  txt=['Operation'
       '   Operands:'
       '      '+objectlist2string(O.operands)
       '   Operator: '+O.operator
       'EndOperation'
      ]
else
  txt=['   Operands:'
       '      '+objectlist2string(O.operands)
       'Endrc'
      ]
end
endfunction
