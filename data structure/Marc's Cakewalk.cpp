#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,sum=0;
    long long int a[1010];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        sum=sum+(a[i]*pow(2,i));
    }
    cout<<sum;





}
