#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[3][3]={{4,3,8},{9,5,1},{2,7,6}};
    int c[3][3]={{2,7,6},{9,5,1},{4,3,8}};
    int d[3][3]={{8,3,4},{1,5,9},{6,7,2}};
    int e[3][3]={{6,7,2},{1,5,9},{8,3,4}};
    int f[3][3]={{2,9,4},{7,5,3},{6,1,8}};
    int g[3][3]={{4,9,2},{3,5,7},{8,1,6}};
    int h[3][3]={{8,1,6},{3,5,7},{4,9,2}};
    int y[3][3]={{6,1,8},{7,5,3},{2,9,4}};

    int a[3][3],sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
             b[i][j]=(a[i][j]+(b[i][j]-a[i][j]));
             c[i][j]=(a[i][j]+(c[i][j]-a[i][j]));
             d[i][j]=(a[i][j]+(d[i][j]-a[i][j]));
             e[i][j]=(a[i][j]+(e[i][j]-a[i][j]));
             f[i][j]=(a[i][j]+(f[i][j]-a[i][j]));
             g[i][j]=(a[i][j]+(g[i][j]-a[i][j]));
             h[i][j]=(a[i][j]+(h[i][j]-a[i][j]));
             y[i][j]=(a[i][j]+(y[i][j]-a[i][j]));

        }


    }
   // cout<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //cout<<b[i][j]<<" ";
            sum=sum+abs(b[i][j]-a[i][j]);
            sum1=sum1+abs(c[i][j]-a[i][j]);
            sum2=sum2+abs(d[i][j]-a[i][j]);
            sum3=sum3+abs(e[i][j]-a[i][j]);
            sum4=sum4+abs(f[i][j]-a[i][j]);
            sum5=sum5+abs(g[i][j]-a[i][j]);
            sum6=sum6+abs(h[i][j]-a[i][j]);
            sum7=sum7+abs(y[i][j]-a[i][j]);
        }
        //cout<<endl;
    }


    int z[8];
    z[0]=sum;
    z[1]=sum1;
    z[2]=sum2;
    z[3]=sum3;
    z[4]=sum4;
    z[5]=sum5;
    z[6]=sum6;
    z[7]=sum7;
    sort(z,z+8);
    for(int i=0;i<7;i++){
        //cout<<z[i]<<" ";
    }
    //cout<<endl;
    cout<<z[0];










}
