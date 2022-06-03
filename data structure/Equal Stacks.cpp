#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,sum1=0,sum2=0,sum3=0,c1,c2,c3;
    cin>>a>>b>>c;
    int d[a],e[b],f[c];
    for(int i=0; i<a; i++)
    {
        cin>>d[i];
    }
    for(int i=0; i<b; i++)
    {
        cin>>e[i];
    }
    for(int i=0; i<c; i++)
    {
        cin>>f[i];
    }
    for(int i=0; i<a; i++)
    {
        sum1=sum1+d[i];
    }
    for(int i=0; i<b; i++)
    {
        sum2=sum2+e[i];
    }
    for(int i=0; i<c; i++)
    {
        sum3=sum3+f[i];
    }
    c1=sum1,c2=sum2,c3=sum3;
    //cout<<sum1<<" "<<sum3<<" "<<sum3<<endl;
    if(sum1== sum2 && sum2==sum3)
    {
        cout<<sum1;

    }
    else
    {
        for(int i=0; i<a; i++)
        {
            sum2=c2;
            for(int j=0; j<b; j++)
            {
                sum3=c3;
                for(int k=0; k<c; k++)
                {
                    sum3=sum3-f[k];
                    //cout<<i<<": "<<sum1<<"  "<<j<<": "<<sum2<<"  "<<k<<": "<<sum3<<"  "<<endl;
                    if(sum1== sum2 && sum2==sum3)
                    {
                        cout<<sum1;
                        break;
                    }

                }

                sum2=sum2-e[j];
            }

            sum1=sum1-d[i];
        }
    }







}

