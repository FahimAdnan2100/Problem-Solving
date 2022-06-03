#include<bits/stdc++.h>
using namespace std;
int main(){
    int blocksize[]={100, 500, 200, 300, 600};
    int processsize[]={212, 417, 112, 426};
    int bl=sizeof(blocksize)/sizeof(blocksize[0]);
    int pl=sizeof(processsize)/sizeof(processsize[0]);

    int j=0,c=0,k=1;
    cout<<"process No.        "<<"Process Size        "<<"Block no"<<endl;
    for(int i=0;i<bl;i++){
        if(blocksize[i]>=processsize[j]){
            cout<<k<<"\t\t\t"<<processsize[j]<<"\t\t"<<i+1<<endl;
            j++;
            c++;
            k++;
            //blocksize[i]=0;
            //i=0;
        }
        else{

        }
    }
    if(c!=pl){
        for(int i=c;i<pl;i++){
            cout<<i+1<<"\t\t\t"<<processsize[i]<<"\t\t"<<"Not Allocated"<<endl;
        }
    }







}
/*
90,490,190,330,700
200,400,100,450
*/
