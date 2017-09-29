function nan_stdev()

x=[%nan 0.121 %nan 0.5 0.8; 21.9 %nan 1 0.9812 %nan; 0.12 0.65 1.08 12 0.1621; %nan 12 24 1 12]

disp('Double')

disp(nanstdev(x))
disp('')

disp(nanstdev(x , 'r'))
disp('')

disp(nanstdev(x, 'c'))
disp('')

y= float(x)

disp('Float')

disp(nanstdev(y))
disp('')

disp(nanstdev(y , 'r'))
disp('')

disp(nanstdev(y, 'c'))
disp('')


endfunction

