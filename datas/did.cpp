#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,c,t,a1,a2,a3,a4,a5,i=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        i++;
        if(a<b || a<c){
            a=a;
        }
        if(b<a || b<c){
            a=b;
            b=a;
        }
        a1=a-b;
        a2=a-c;
        a3=b-c;
        a4=b-a1;
        a5=b-a2;
        if((a==c || b==c) )
        {
            cout<<"YES"<<endl;

        }

        else if(c%a1==0){
            cout<<"YES"<<endl;
        }

        else if((a1+a2)==c || (a1+a3)==c || (a1+a4)==c || (a1+a5)==c || (a3+a2)==c || (a4+a2)==c || (a5+a2)==c || (a3+a4)==c || (a3+a5)==c  ){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }





}

