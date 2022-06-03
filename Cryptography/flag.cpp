#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void circleMidpoint(int xCenter,int yCenter,int radius){
    int x=0;
    int y=radius;
    int p= 1-radius;
    void circlePlotPoints(int,int,int,int);
    circlePlotPoints(xCenter,yCenter,x,y);
    while(x<y){
        x++;
        if(p<0){
            p=p+(2*(x+1));
        }
        else{
            y--;
            p=p+(2*(x-y))+1;
        }
        circlePlotPoints(xCenter,yCenter,x,y);
    }
}
void circlePlotPoints(int xCenter,int yCenter,int x,int y)
{
    putpixel(xCenter+x,yCenter+y,7);
    putpixel(xCenter-x,yCenter+y,7);
    putpixel(xCenter+x,yCenter-y,7);
    putpixel(xCenter-x,yCenter-y,7);
    putpixel(xCenter+y,yCenter+x,7);
    putpixel(xCenter-y,yCenter+x,7);
    putpixel(xCenter+y,yCenter-x,7);
    putpixel(xCenter-y,yCenter-x,7);
}


int  main()
{
    int t=4;
    int x,y,x1,x2,y1,y2,k,dx,dy,s,xi,yi;
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\\tc\\BGI:");
    while(t--)
    {

        printf("enter first point: ");
        scanf("%d%d",&x1,&y1);
        printf("enter second point: ");
        scanf("%d%d",&x2,&y2);
        x=x1;
        y=y1;
        putpixel(x,y,7);
        dx=x2-x1;
        dy=y2-y1;
        if(abs(dx)>abs(dy))
            s=abs(dx);
        else
            s=abs(dy);

        xi=dx/s;
        yi=dy/s;
        x=x1;
        y=y1;
        putpixel(x,y,7);
        for(k=0; k<s; k++)
        {
            x=x+xi;
            y=y+yi;
            putpixel(x,y,7);
        }
        circleMidpoint(280,200,50);


    }
    getch();
    closegraph();
}
/*
100 100
100 300
100 100
500 100
100 300
500 300
500 100
500 300

*/

