%a = [.1,.15,.2,.25,.3,.35,.5,.55,.59,.66,.6,.75,.7,.8,.9,.84,.95,.99,.01,.5,.19];

a = rand(1,25) 

for j=1:25
    b=a(j);
    l=-10:10;
    for i=1:21
        %x = (1./(1-b.*b)).*(b.^l);
        x=(b.^l)./(1-(b.*b));
        subplot(5,5,j);
        stem(l,x,'r','filled');
        xlabel('n','Color','r');
        ylabel('y[n]','Color','r');
        title(sprintf('a[%d]=%d',j,b),'color','b');
        %axis([-15 15 -inf inf]);
        grid ;
        disp(x)
    end
    
    
end
