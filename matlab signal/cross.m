n=-13:11
%x=[1,2,3,4,5,6,7,6,5,4,3,2,1]
x=[0,0,0,0,0,0,0,0,1,-1,2,3,7,1,2,-1,3,0,0,0,0,0,0,0,0]
y=[0,0,0,0,0,0,0,0,1,2,2,1,2,4,1,-1,2,5,0,0,0,0,0,0,0]

subplot(4,1,1)
stem(n,x,'r','filled')
xlabel('n','Color','r')
ylabel('x[n]','Color','r')
title(' n','Color','g')
grid
n1=-13:11
%n=flip(n)
subplot(4,1,2)
stem(n1,y,'b','filled')
xlabel('n','Color','r')
ylabel('y[n]','Color','r')
title(' y[n]','Color','g')
grid
sum=0;
subplot(4,1,3)
stem(n1,y.*x,'b','filled')
xlabel('n','Color','r')
ylabel('y[n]','Color','r')
title(' x[n]*y[n]','Color','g')
grid

%print("x[n]*y[n]:")


for c = 1:20
    sum=sum+(x(c).*y(c))
    
end    


n3 =-12  :   12 ;
subplot(4,1,4)
stem(n3,y,'g','filled')
xlabel('n','Color','r')
ylabel('y[n]','Color','r')
title(' y[n-1]','Color','g')
grid




