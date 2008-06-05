// Clear files, variables, figures, screen.
mode(-1);
clc;

disp('Starting full reset...')
//disp('Press enter to continue...');
//halt;

clc;
clear
//mclose('all');
// Assuming that max 50 figures are currently open
for counter =1:50
   close
end
lines(0)
