n=0:40;
k=2
c=-(1/12)+(pi/6)*i;
y=k*exp(c*n);
subplot(2,1,1);
stem(n,real(y)+10,'r');
subplot(2,1,2);
stem(n,imag(y)+10,'g');
