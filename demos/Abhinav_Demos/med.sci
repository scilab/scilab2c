function med()

a=float([12,287,312,52; 4,5,456,512; 12, 4, 6,213])


disp('Float')


disp(median(a, 'r'))
disp('')

disp(median(a, 'c'))
disp('')

disp(median(a))
disp('')


b=[12,287,312,52; 4,5,456,512; 12, 4, 6,213]


disp('Double')


disp(median(b, 'r'))
disp('')

disp(median(b, 'c'))
disp('')

disp(median(b))
disp('')



disp('uint16')


c=uint16([12,287,312,52; 4,5,456,512; 12, 4, 6,213])
disp(median(c, 'r'))
disp('')

disp(median(c, 'c'))
disp('')

disp(median(c))
disp('')


disp('doubleComplex')


d= [%i*21, 65+%i*7, %i*121, 56; %i*6112, 12 ,3, 0]
disp(median(d, 'r'))
disp('')

disp(median(d, 'c'))
disp('')

disp(median(d))
disp('')



endfunction

