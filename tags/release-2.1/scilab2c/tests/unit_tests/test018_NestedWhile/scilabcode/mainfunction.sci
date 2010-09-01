//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

a = 0;
b = 5;
while (a+b < 36)
   disp('a');
   disp(a);
   a = a + b;
   while (b < 9)
      disp('b');
      disp(b);
      b = b + 1;
      a = a + 1;
   end
end
endfunction

