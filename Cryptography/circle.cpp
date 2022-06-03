
#include <graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
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

    for(int i=0;i<=360;i++){
        putpixel(x+n*cos(i),y+n*sin(i),2);
    }
    getch();
    closegraph();
}


