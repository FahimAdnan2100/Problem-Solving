#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int arr1;
    int arr2;
    int first=0,second=0;
    void check(int ar1,int ar2)
    {
        arr1=ar1;
        arr2=ar2;
        if(arr1>arr2)
        {
            first+=1;
        }
        else if(arr1==arr2)
        {
            first+=0;
            second+=0;
        }
        else
        {
            second+=1;
        }
    }
    void total()
    {
        cout<<first<<" "<<second;
    }
};


int main()
{
    int a[110],b[110];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];

    }
    for(int i=0; i<3; i++)
    {

        cin>>b[i];
    }

    A obj;
    for(int i=0; i<3; i++)
    {

        obj.check(a[i],b[i]);
    }
    obj.total();







}

