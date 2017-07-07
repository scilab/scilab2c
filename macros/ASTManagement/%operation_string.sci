function txt=%operation_string(O)
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
<<<<<<< HEAD
endfunction
=======
endfunction
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
