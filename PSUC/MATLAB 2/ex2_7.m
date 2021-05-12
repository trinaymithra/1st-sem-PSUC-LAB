fs=10000;
t=0:1/fs:1;
x1=tripuls(2*pi*50*t);
x2=rectpuls(2*pi*50*t);
subplot(211),plot(t,x1),axis([-0.1 0.1 -1.2 1.2]);
xlabel('time(sec)');ylabel('amplitude');
title('Triangular aperiodic pulse');
subplot(212)
plot(t,x2)
axis([-0.1 0.1 -1.2 1.2]);
xlabel('time(sec)');ylabel('amplitude');
title('Rectangular aperiodic pulse');