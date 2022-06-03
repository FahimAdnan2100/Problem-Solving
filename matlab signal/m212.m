s=[]
ss=[]
for i=1:7
    num = input('Numerator coefficient vector = ');
    den = input('Denominator coefficient vector = ');
    s=[s,num]
    ss=[ss,den]
end    
for j=1:7
    [z,p,k] = tf2zp(s(j),ss(j));
sos = zp2sos(z,p,k)
end

%3   8   12   7   2   –2
%16   24   24   14   5   5

%2   10   23   34   31   16   4
%36   78   87   59   26   7   1