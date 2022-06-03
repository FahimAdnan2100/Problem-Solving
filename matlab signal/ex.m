disp(ls)
n=-6:4;
subplot(4,4,10)
stem(n,ls,'b','filled');
xlabel('n','Color','r');
ylabel('y[n]','Color','r');
title('AutoCorrelation','color','b')
axis([-8 8 -inf inf]);
grid ;
rxx0=0;
for i=1:1
    stem(n,x,'m','filled');  
    for cc=1:11-i
        rxx0=rxx0+x(cc).*x(cc+i-1); 
    end   
end  

sprintf('rxx0 = %d',rxx0)
ryy0=0;
for i=1:1
   stem(n,y,'m','filled');    
    for cc=1:11-i
        ryy0=ryy0+y(cc).*y(cc+i-1); 
    end 
end  

sprintf('ryy0 = %d',ryy0)
a=sqrt(rxx0.*ryy0)

pxx=[];

for i=1:10
    nn=ls(i)/a;
    pxx = [pxx,nn];
end
disp(pxx)
    


