#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[6][6],sum[16]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},x=0,p=0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            cin>>a[i][j];
        }
    }

    int k=0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            for(int k=i; k<i+3; k++)
            {
                for(int l=j; l<j+3; l++)
                {
                    if((k==1+i && l==0+j) || (k==1+i && l==2+j)){
                        p=p;
                    }else{
                    p=p+a[k][l];
                        }
                }

            }



            sum[x]=p;
            //cout<<endl<<sum[x]<<endl;
            p=0;
            x++;
        }



    }

    sort(sum,sum+16);
    cout<<sum[15];







}

