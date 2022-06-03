#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>a;
    vector<int>::iterator it;
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
            cin>>b[i];
            int c=b[i];
        a.push_back(c);
    }

    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<endl;
    }






}

