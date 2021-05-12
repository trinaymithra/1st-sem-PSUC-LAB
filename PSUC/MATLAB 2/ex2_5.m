%ex2_5.m
[x,y]=meshgrid(-8:0.5:8,-8:0.5:8);
R=sqrt(x.^2+y.^2);
Z=sin(R)./R;
surf(Z)
