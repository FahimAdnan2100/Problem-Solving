#include<bits/stdc++.h>
using namespace std;

int check(int a,int b,int c)
{
    int la,sm,mi;

    if(c==0)
    {
        return 1;
    }
    else if(c<0)
    {
        return 0;
    }

    else
    {
        if(a==b)
        {
            c=-1;
        }
        else if(a>b)
        {
            la=a;
            sm=b;
        }
        else
        {
            la=b;
            sm=a;
        }

        mi=la-sm;
        c=c-mi;
        //cout<<c<<"***";
        check(a,b,c);
    }

}
int main()
{



    int a,b,c,t,ss;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==c || b==c)
        {
            cout<<"YES"<<endl;

        }
        ss=check(a,b,c);
        if(ss==1)
        {
            cout<<"YES"<<endl;
        }
        if(ss==0)
        {
            cout<<"NO"<<endl;
        }

    }





}

