function nan_median()

x=[%nan 0.121 %nan 0.5 0.8; 0.12 %nan 1 0.9812 %nan; 0.4 0.65 1.08 12 0.1621; 12 12 24 1 12]

disp('Double')

disp(nanmedian(x))
disp('')

disp(nanmedian(x , 'r'))
disp('')

disp(nanmedian(x, 'c'))
disp('')

y= float(x)

disp('Float')

disp(nanmedian(y))
disp('')

disp(nanmedian(y , 'r'))
disp('')

disp(nanmedian(y, 'c'))
disp('')


endfunction

