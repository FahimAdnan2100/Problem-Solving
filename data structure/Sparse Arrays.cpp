#include<bits/stdc++.h>
using namespace std;
int main(){

int n,c=0;
cin>>n;
string a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
string b[m];
int d[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(b[i]==a[j]){
            c++;
        }
    }
    d[i]=c;
    c=0;

}
for(int i=0;i<m;i++){
    cout<<d[i]<<endl;
}









}

