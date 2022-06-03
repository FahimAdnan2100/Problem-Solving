#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string a[t+1];
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        a[i]=s;
    }
    for(int i=0;i<t;i++){
        int l= a[i].size();
        if(l<5){
            cout<<"Too short: "<<l<<endl;
        }
        else{
            cout<<"Valid"<<endl;
        }
    }




}





