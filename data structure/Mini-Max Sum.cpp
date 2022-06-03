
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5],sum[2]={0,0};
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int k=0,p=0;
    for(int i=0;i<k+4;i++){
            if(i==k+4){


                sum[k]=p;
                i=1;
                p=0;
                k++;
                break;
            }else{
            p=p+a[i];
            cout<<p<<" ";
            }


    }
    cout<<sum[0]<<" "<<sum[1];






}
