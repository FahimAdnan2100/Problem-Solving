s=[]
ss=[]
for i=1:6
    num = input('Numerator coefficient vector = ');
    den = input('Denominator coefficient vector = ');
    s=[s,num]
    ss=[ss,den]
end    
for j=1:6
    [z,p,k] = tf2zp(s(j),ss(j);
sos = zp2sos(z,p,k)
end

%3   8   12   7   2   –2
%16   24   24   14   5   5