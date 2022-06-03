   
num = input('Numerator coefficient vector = ');
den = input('Denominator coefficient vector = ');
[z,p,k] = tf2zp(num,den);
sos = zp2sos(z,p,k)
%2   10   23   34   31   16   4
%6   31   74   102   74   31   6