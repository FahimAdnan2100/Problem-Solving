
#include <graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1,x2,y1,y2,step,dx,dy;
    double xinc,yinc,x,y;

    cout<<"Enter x1: ";
    cin>>x1;
    cout<<endl;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<endl;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<endl;
    cout<<"Enter y2: ";
    cin>>y2;
    cout<<endl;
    //x1=10,x2=300,y1=10,y2=340;
    dx=(x2-x1);
    dy=(y2-y1);
    x=x1,y=y1;
    //cout<<"dx: "<<dx<<endl;
    //cout<<"dy: "<<dy<<endl;
    if(abs(dx)>abs(dy))
    {
        step=abs(dx);
    }
    else
    {
        step=abs(dy);
    }
    //cout<<"step: "<<step<<endl;
    xinc=dx/double(step);
    yinc=dy/double(step);
    //cout<<"xinc: "<<xinc<<endl;
    //cout<<"yinc: "<<yinc<<endl;
    putpixel(round(x),round(y),2);
    for(int i=0; i<step; i++)
    {
        x=x+xinc;
        y=y+yinc;
        putpixel(round(x),round(y),7);
        //cout<<x<<"  "<<y<<endl;
    }
    getch();
    closegraph();
}
/*
20
20
200
200
*/

