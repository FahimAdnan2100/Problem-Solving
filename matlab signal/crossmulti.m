n=-7:6
x=[0,0,1,-1,2,3,7,1,2,-1,3,0,0,0]
y=[0,0,1,2,2,1,2,4,1,-1,2,5,0,0]
sum=0
sum1=0
p=1:14
for i=1:8
    sum=0;
    subplot(4,2,i)
    stem(n,(x.*y),'r','filled')
    y=circshift(y,i);
    xlabel('n','Color','r')
    ylabel('y[n]','Color','r')
    title(sprintf('x[n] * y[n-%d]',i-1),'color','b')
    axis([-10 16 -inf inf]);
    grid
    n = -7+i:6+i
end 
    

   
    


