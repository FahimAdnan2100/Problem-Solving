#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>ls;
    list<int>::iterator it;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
         cin>>v;
        ls.push_back(v);
    }

    for(it = ls.begin();it!=ls.end();it++){
        cout<<*it<<endl;
    }




}

