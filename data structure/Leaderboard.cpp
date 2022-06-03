#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<3;
    int m,n;

     int ranked[10000010];
     int player[10000010];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ranked[i];
    }

    for(int j=0;j<n;j++){
        cin>>player[j];
    }
    int j=0;
    for(int i=m-1;i>=0;i--){
        if(player[j]<=ranked[i]){
            cout<<i<<endl;
        }
        j++;
    }






}

