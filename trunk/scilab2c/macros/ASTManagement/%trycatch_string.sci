function txt=%trycatch_string(p)
//overloading function for "trycatch" type tlist string function
//
//fields:
//      trystat   : list('EOL') (the instructions list)
//      catchstat : list('EOL') (the instructions list on error)
  
  txt=['Statements'
       '    '+objectlist2string(p.trystat)
       'CatchStatements'
       '    '+objectlist2string(p.catchstat)
       'EndProgram'
      ]
endfunction
