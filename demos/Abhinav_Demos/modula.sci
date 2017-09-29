function modula()

a=312
b=18.12
disp('Double')

disp(pmodulo(a,b))

disp(pmodulo(a,-b))

disp(pmodulo(-a,b))

disp(pmodulo(-a,-b))

k=[12 , -134 , 1213; -12.12, -0.12, 91281]
l=[12, ,1212 ,12; -91288.12, -0.912, -10000]

disp(pmodulo(k,l))

disp('Float')
c= float(312)
d=float(121.212)

disp(pmodulo(c,d))

disp(pmodulo(c,-d))

disp(pmodulo(-c,d))

disp(pmodulo(-c,-d))

e=float([12 , -134 , 1213; -12.12, -0.12, 91281])
f=float([12, ,1212 ,12; -91288.12, -0.912, -10000])

disp( pmodulo(e,f))

disp('Uint16')

g= int16(112)
h= int16(121)

disp(pmodulo(g,h))

disp(pmodulo(g,-h))

disp(pmodulo(-g,h))

disp(pmodulo(-g,-h))

i= int16([12 , -134 , 1213; -12.12, -12.54, 91281])

j= int16([12, ,1212 ,12; 1121, -6000, -10000])
disp( pmodulo(i,j))


endfunction

