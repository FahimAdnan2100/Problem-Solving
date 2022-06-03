#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int  main()
{
    int x,y,x1,y1,x2,y2,p,dx,dy;
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\\tc\\BGI:");
    printf("\nEnter x1: ");
    scanf("%d",&x1);
    printf("\nEnter y1: ");
    scanf("%d",&y1);
    printf("\nEnter x2: ");
    scanf("%d",&x2);
    printf("\nEnter y2 : ");
    scanf("%d",&y2);
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    putpixel(x,y,2);
    p=(2*dy-dx);
    while(x<=x2)
    {
        if(p<0)
        {
            x=x+1;
        }
        p=2*x-dx;
        x=x+1;
        y=y+1;
        p=p+2*dy;
        putpixel(x,y,7);
    }
    getch();
    closegraph();
}
