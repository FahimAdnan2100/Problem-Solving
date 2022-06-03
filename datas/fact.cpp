#include<bits/stdc++.h>
using namespace std;

int64_t  fact(int64_t  x){

if(x==1){
    return 1;
}else{
    return x*fact(x-1);
}
    }

int main(){


 int64_t  x;
cin>>x;
cout<<fact(x);





}

