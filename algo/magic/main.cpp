#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int a[3][3]= {{5,3,4},{1,5,8},{6,4,2}};
    int a[3][3],b[3][3];
    int sum=0,sum1=0,sum2=0,sum3=0, total,p=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int x=0; x<10; x++)
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if((i==0 && j==0) || (i==2 && j==2))
                    {
                        sum=sum+a[i][k];
                        sum1=sum1+a[k][j];
                        sum2=sum2+a[k][k];
                    }
                    else if((i==0 && j==2) || (i==2 && j==0))
                    {
                        sum=sum+a[i][k];
                        sum1=sum1+a[k][j];
                        sum2=sum2+a[j-k][k];
                    }
                    else if((i==0 && j==1) || (i==2 && j==1) || (i==1 && j==0) || (i==1 && j==2))
                    {
                        sum=sum+a[k][j];
                        sum1=sum1+a[i][k];

                    }
                    else if(i==1 && j==1)
                    {
                        sum=sum+a[i][k];
                        sum1=sum1+a[k][j];
                        sum2=sum2+a[k][k];
                        sum3=sum3+a[j-k][k];
                    }

                }
                if(sum==15 || sum1==15 || sum2==15 || sum3==15)
                {
                    // a[i][j]=a[i][j];
                    //p=p+a[i][j];
                    sum=0;
                    sum1=0;
                    sum2=0;
                    sum3=0;
                    //j=0;
                    //break;
                }
                else if(sum>=15 || sum1>=15 || sum2>=15 || sum3>=15)
                {
                    if(a[i][j]<10 && a[i][j]>1)
                    {
                        a[i][j]=a[i][j]-1;
                        sum=0;
                        sum1=0;
                        sum2=0;
                        sum3=0;
                        j--;
                    }

                }
                else
                {
                    if(a[i][j]<9 && a[i][j]>1)
                    {

                        a[i][j]=a[i][j]+1;
                        sum=0;
                        sum1=0;
                        sum2=0;
                        sum3=0;
                        j--;
                    }
                }


            }




        }

    }
    cout<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
            total = total+a[i][j]-b[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<total;








}
/*
4 5 8
2 3 6
1 9 7


1 2 3
4 5 6
7 8 9

if(p==45)
            {
                break;
            }
            else
            {
                i=0;
                p=0;
            }
*/
