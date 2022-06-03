subplot(3,1,3)
count=0
T=mean(f)
done=false;
while done
    count=count+1
    g=f>T
    next=.5*(mean(f(g))+mean(f(~g)))
    done=abs(T-next)<.5
    T=next
end
disp(count)
g = im2bw(f,T./255)
imshow(g)