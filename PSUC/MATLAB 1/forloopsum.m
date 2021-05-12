[Nrows,Ncols]=size(x);
xsum=0.0;
for m=1:Nrows
    for n=1:Ncols
        xsum=xsum+x(m,n);
    end;
end;