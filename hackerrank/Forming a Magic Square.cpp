#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],sum=0,sum1=0,sum2=0;
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
            for(int k=0;k<3;k++){
                if(i==j && j==k){
                    sum=sum+a[i][j];
                }
                if(i=k && j==i){
                    sum1=sum1+a[i][j];
                }
                if(i==k && j==k){
                    sum2=sum2+a[i][j];
                }
            }
            if(sum==15 || sum1==15 || sum2==15){
                break;
            }else{
                a[i][j]=a[i][j]+1;
                i=0;j=0;

            }

        }


    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }








}
