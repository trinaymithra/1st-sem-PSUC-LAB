%ex2_3.m
%Creating subplots
t=0:0.01 :2*pi;
f1=sin(t);
f2=f1+(1/3)*sin(3*t);
f3=f2+(1/5)*sin(5*t);
f4=f3+(1/7)*sin(7*t);
v=[0 2*pi -1 1];
subplot(221),plot(t,f1),grid,axis(v);
xlabel('f_1-->');
ylabel('t-->');
subplot(222),plot(t,f2),grid,
axis(v);
xlabel('f_2-->');
ylabel('t-->');
subplot(223),plot(t,f3),grid,
axis(v);
xlabel('f_3-->');
ylabel('t-->');
subplot(224),plot(t,f4),grid,
axis(v);
xlabel('f_4-->');
ylabel('t-->');