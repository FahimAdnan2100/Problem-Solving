#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int arr1;
    int arr2;
    int first=0;
    int sum,a;
    void check(int ar1,int ar2,int k)
    {
        arr1=ar1;
        arr2=ar2;
        sum=ar1+ar2;
        if(sum%k!=0){
            first+=1;
        }
        a=sum%k;
        cout<<"("<<arr1<<"+"<<arr2<<")"<<"%"<<k<<" = "<<a<<endl;

    }
    void total()
    {
        cout<<first;
    }
};


int main()
{
    long long int a[10000];
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }


    A obj;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++){
            obj.check(a[i],a[j],k);
        }

    }
    obj.total();


/*
4 3
1 7 2 4

*/




}


