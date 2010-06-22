//SCI2C: DEFAULT_PRECISION= FLOAT
function test_float_OpSlash()
  d0 = %pi
  d2 = [1 2 3 4 ; 5 6 7 8 ; 9 10 11 12 ; 13 14 15 16]
  z0 = d0 + %i * d0
  z2 = d2 + %i * d2

  disp(d0/d0)
  disp(d0/z0)
  disp(z0/d0)
  disp(z0/z0)

  disp(d2/d0)
  disp(d2/z0)
  disp(z2/d0)
  disp(z2/z0)

  disp(d0/d2)
  disp(d0/z2)
  disp(z0/d2)
  disp(z0/z2)
  
  disp(d2/d2)
  disp(d2/z2)
  disp(z2/d2)
  disp(z2/z2)

  disp([1 2 3]/[1 2 3]) //d2d2OpSlashd0
  disp([1 2 3]/(%i * [1 2 3])) //d2z2OpSlashz0
  disp((%i * [1 2 3])/[1 2 3]) //z2d2OpSlashz0
  disp((%i * [1 2 3])/(%i * [1 2 3])) //z2z2OpSlashz0

endfunction
