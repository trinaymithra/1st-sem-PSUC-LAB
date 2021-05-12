function[r,theta]=r2p(x)
%r2p - function to convert from rectangular to polar
% call syntax: [r,theta]=r2p(x)
%Inout: x=complex number in the form a+jb
%Output:[r,theta]=the complex number in polar form
r=abs(x);
theta=angle(x)*180/pi;