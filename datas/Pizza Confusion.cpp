#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    n=n+1;
    int j=0;
    string res[n];
    for(int i=0;i<n;i++){

        cin>>res[j];
        j++;

    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }



}
