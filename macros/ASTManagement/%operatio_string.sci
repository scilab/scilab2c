function txt=%operatio_string(O)
//overloading function for "operation" type tlist string function
//this is a node of the AST
//fields:
//     operands: a list
//     operator: a string
<<<<<<< HEAD
if O.operator <> 'rc' & O.operator <> 'cc'
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
  txt=['Operation'
       '   Operands:'
       '      '+objectlist2string(O.operands)
       '   Operator: '+O.operator
       'EndOperation'
      ]
<<<<<<< HEAD
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
=======
endfunction
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
