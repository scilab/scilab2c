function nan_max()

x=[%nan 0.121 %nan 0.5 0.8; 0.12 %nan 9 12 %nan]

disp('Double')

disp(nanmax(x))
disp('')

disp(nanmax(x , 'r'))
disp('')

disp(nanmax(x, 'c'))
disp('')

y= uint16(x)

disp('Float')

disp(nanmax(y))
disp('')

disp(nanmax(y , 'r'))
disp('')

disp(nanmax(y, 'c'))
disp('')




endfunction

