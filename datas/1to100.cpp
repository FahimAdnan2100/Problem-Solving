#include<bits/stdc++.h>
using namespace std;


int ss(int a){
     static int j=1;
if(a==0){
    return 0;
}else{
cout<<j<<endl;
j++;

ss(a-1);
}
}

int main(){
    ss(100);


}
