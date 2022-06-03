n=-7:6;
%x=[0,0,1,-1,2,3,7,1,2,-1,3,0,0,0];
x=[0,0,1,2,3,4,1,-1,0,0,0];
y=[0,0,1,2,2,1,2,4,1,-1,2,5,0,0];
sum=0;
sum1=0;
for i=1:8
    subplot(4,2,i);
    stem(n,y,'r','filled');
    xlabel('n','Color','r');
    ylabel('y[n]','Color','r');
    title(sprintf(' y[n+%d]',i-1),'color','b');
    axis([-15 10 -2 7]);
    grid ;
    sum=0;
    for cc=1:15-i
        sum=sum+x(cc).*y(cc+i-1); 
    end 
    disp((sprintf("x[n]*y[n+%d] = %d",i-1,sum)));
    
    sum1=sum1+sum;
    n = -7-i:6-i;
end 
disp((sprintf("Total is = %d",sum1)))   

   
    


