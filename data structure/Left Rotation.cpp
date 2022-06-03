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
    for(int i=0; i<t; i++)
    {
        b[n-1]=a[0];
        for(j=0; j<n-1; j++)
        {
            b[j]=a[j+1];
            a[j]=b[j];
        }
        a[n-1]=b[n-1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
}

