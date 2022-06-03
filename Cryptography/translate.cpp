gh
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>
using namespace std;
int main()
{
int graphdriver=DETECT,graphmode;
initgraph(&graphdriver,&graphmode,"...\\bgi");
int x,y,x1,y1,x2,y2,x3,y3;
cout<<"Enter x1 & y1: ";
cin>>x1>>y1;
cout<<"Enter x2 & y2: ";
cin>>x2>>y2;
cout<<"Enter x3 & y3: ";
cin>>x3>>y3;
cleardevice();
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
//getch();
//cleardevice();
cout<<"\ntranslatio factors: ";
cin>>x>>y;
x1+=x;
y1-=y;
x2+=x;
y2-=y;
x3+=x;
y3-=y;
//cleardevice();
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
getch();
closegraph();
}
/*
100 100
200 100
150 50
20 30
*/
