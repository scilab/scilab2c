function test_double_OpStar()
  a = 2 * 3; //d0d0OpStard0
  b = 2 * %i;
  c = 2 * b; //d0z0OpStard0
  d = [2 * %i 3 * %i 4* %i];
  e = 2 * d; //d0z2OpStarz2
  l = 2 * [1 2; 3 4 ; 5 6] //d0d2OpStard2
  
  f = b * a; // z0d0OpStarz0
  g = b * b; // z0z0OpStarz0
  h = [1 2 3 4];
  j = b * h; // z0d2OpStarz2
  k = b * d; // z0z2OpStarz2

  m = [1 2;3 4] * [5 6; 7 8] //d2d2OpStard2
  n = [1 2;3 4] * ([5 6; 7 8] + %i) //d2z2OpStarz2
  o = [1 2 3 4 5 6 7 8 9];
  p = o * o' // d2d2OpStard0
  q = o * (o + %i)' // d2z2OpStarz0
  disp(q);
  
  r = ([1 2;3 4] + %i) * ([5 6; 7 8] + %i) //z2z2OpStarz2
  s = ([1 2;3 4] + %i) * [5 6; 7 8] //z2d2OpStarz2
  t = [1 2 3 4 5 6 7 8 9] + %i;
  u = t * t'; // z2z2OpStarz0
  v = t * o'; //z2d2OpStarz0
  disp(v);
endfunction