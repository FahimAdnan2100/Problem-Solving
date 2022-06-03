#include <graphics.h>
//#include<stdio.h>
#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
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
    putpixel(xCenter+x,yCenter+y,1);
    putpixel(xCenter-x,yCenter+y,2);
    putpixel(xCenter+x,yCenter-y,3);
    putpixel(xCenter-x,yCenter-y,4);
    putpixel(xCenter+y,yCenter+x,5);
    putpixel(xCenter-y,yCenter+x,6);
    putpixel(xCenter+y,yCenter-x,7);
    putpixel(xCenter-y,yCenter-x,8);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int n,x,y;
    cout<<"Enter Radius: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    circleMidpoint(200,200,50);
    getch();
    closegraph();
}



