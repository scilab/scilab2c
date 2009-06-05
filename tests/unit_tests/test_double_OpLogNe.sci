function test_double_OpLogNe()
  a = 1;
  b = 2 + %i;
  c = [1 2 3]
  d = %i * [1 2 3 4 5 6]
  disp(a <> a); // d0d0OpLogEqd0
  disp(a <> b); // d0z0OpLogEqd0
  disp(a <> c); // d0d2OpLogEqd2
  disp(a <> d); // d0z2OpLogEqd2

  disp(b <> a); // z0d0OpLogEqd0
  disp(b <> b); // z0z0OpLogEqd0
  disp(b <> c); // z0d2OpLogEqd2
  disp(b <> d); // z0z2OpLogEqd2

  disp(c <> a); // d2d0OpLogEqd0
  disp(c <> b); // d2z0OpLogEqd0
  disp(c <> c); // d2d2OpLogEqd2
  disp(c <> d); // d2z2OpLogEqd2
  
  disp(d <> a); // z2d0OpLogEqd0
  disp(d <> b); // z2z0OpLogEqd0
  disp(d <> c); // z2d2OpLogEqd2
  disp(d <> d); // z2z2OpLogEqd2
endfunction
