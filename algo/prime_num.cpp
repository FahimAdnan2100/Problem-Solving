#include<bits/stdc++.h>
using namespace std;

void prime_num(int n){
int c=0;
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(i%j==0){
          c++;

        }
    }
    if(c==2){
        cout<<i<<" ";
    }
    c=0;
}


}

int main()
{

    prime_num(1000000);




}





