n=-3:6;
x=[2,-1,2,3,1,0,1,0,2,3];
y=[1,2,1,-3,-1,0,2,0,0,0];
sum1=0;
ls=[];
plus=[];
minus=[];
for i=1:7
    subplot(4,4,i);
    stem(n,y,'m','filled');
    xlabel('n','Color','r');
    ylabel('y[n]','Color','r');
    title(sprintf('y[n+%d]',i-1),'color','b');
    axis([-10 15 -4 5]);
    grid ;
    sum=0;
    for cc=1:11-i
        sum=sum+x(cc).*y(cc+i-1); 
    end 
    disp((sprintf("x[n]*y[n+%d] = %d",i-1,sum)));
    ls=[ls,sum];
    sum=0;
    n = -3-i:6-i;
end 
  
n=-3:6;
x=[2,-1,2,3,1,0,1,0,2,3];
y=[1,2,1,-3,-1,0,2,0,0,0];
for i=2:4
    n = -3+i:6+i;
    subplot(4,4,i+7);
    stem(n,y,'r','filled');
    xlabel('n','Color','r');
    ylabel('y[n]','Color','r');
    title(sprintf(' y[n-%d]',i-1),'color','b');
    axis([-10 15 -4 5]);
    grid ;
    sum=0;
    for cc=1:11-i
        sum=sum+x(cc+i-1).*y(cc); 
    end 
    disp((sprintf("x[n]*y[n-%d] = %d",i-1,sum)));
        
    plus=[plus,sum];
    sum=0;  
end 
b=flip(plus);
minus=[minus,b];
minus=[minus,ls];
disp(minus)


n=-6:3;
subplot(4,4,13)
stem(n,minus,'b','filled');
xlabel('n','Color','r');
ylabel('y[n]','Color','r');
title('Cross Correlation','color','b')
axis([-8 8 -inf inf]);
grid ;






