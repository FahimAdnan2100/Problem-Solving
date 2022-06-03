s=[]
ss=[]
for i=1:6
    num = input('Numerator coefficient vector = ');
    den = input('Denominator coefficient vector = ');
    s=[s,num]
    ss=[ss,den]
end

for j=1:6
    [r1,p1,k1] = residuez(s(j),ss(j));
    [r2,p2,k2] = residue(s(j),ss(j));
    disp('Parallel Form I')
    disp('Residues are');disp(r1);
    disp('Poles are at');disp(p1);
    disp('Constant value');disp(k1);
    disp('Parallel Form II')
    disp('Residues are');disp(r2);
    disp('Poles are at');disp(p2);
    disp('Constant value');disp(k2);
end
%3   8   12   7   2   –2
%16   24   24   14   5   5

%2   10   23   34   31   16   4
%36   78   87   59   26   7   1
