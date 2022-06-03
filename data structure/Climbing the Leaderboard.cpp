#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<3;
    int m,n;

    long long int ranked[1000000010],player[1000000010];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ranked[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>player[i];
    }
    int j=0;
    for(int i=m-1;i>=0;i--){
        if(player[j]<=ranked[i]){
            cout<<i<<endl;
        }
        j++;
    }






}

