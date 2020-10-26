clc
S=3.5e6;
V=13.8e3;
w=2*pi*60;
k=0.01;
tc=40e-6;
tl=40e-6;
C=k*(1/w)*(S/(sqrt(3)*V))*sqrt(1+((w*tc)^2))
Rc=tc/C
L=k*(1/w)*((sqrt(3)*V)/S)*sqrt(1+(w*tl)^2)
Rl=L/tl