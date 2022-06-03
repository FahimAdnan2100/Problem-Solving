#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){

int n;
float m=0,e=0,p=0;
cin>>n;
int a[n+1];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]<0){
        m++;
    }
    if(a[i]==0){
            e++;
    }
    if(a[i]>0){
        p++;

    }
}


printf("%lf\n",p/n);
printf("%lf\n",m/n);
printf("%lf\n",e/n);








}

