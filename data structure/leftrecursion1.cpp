#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,j;
    cin>>n>>t;
    int a[n+100],b[n+100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    /*for(int i=0; i<n-t; i++)
    {
        b[i]=0;
    }*/
    j=0;
    for(int i=n-t; i<n; i++)
    {
        b[i]=a[j];
        j++;
    }


    for(int i=0; i<n-t; i++)
    {
        b[i]=a[j];
        j++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
}


