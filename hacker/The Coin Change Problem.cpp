#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int c[55],di[55],k=0;
    int i=0,cou=1;
    void check(int a)
    {
        c[i]=a;
        i++;
    }
    void p(int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<c[i];
        }
    }
    void cc(int t,int n)
    {
        for(int i=1; i<n; i++)
        {
            int di[k]=t/c[i];
            for(int j=0; j<t+n; j++)
            {
                if(di[k]%c[j]==0)
                {
                    cou++;
                }
            }
            k++;

        }
        cout<<cou;

    }
};

int main()
{
    A obj;
    int t,n,c[55],d;
    cin>>t>>n;
    for(int i=0; i<n; i++)
    {
        cin>>d;
        obj.check(d);
    }
    //obj.p(n);
    obj.cc(t,n);










}

