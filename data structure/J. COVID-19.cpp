#include<bits/stdc++.h>
using namespace std;

int sum(int n){

int a=n+1;
    int b = n*a;
    int c=2*n;
    int d=c+1;
    int e=b*d;
    int r=e/6;
    return r;
}
int main(){

    int n,m;
    cin>>n>>m;

    cout<<sum(n)-sum(m);






}

