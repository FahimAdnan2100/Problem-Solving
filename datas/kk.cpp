#include<iostream>
using namespace std;

void check(int x1,int x2,int v1,int v2){
    if(x1<x2) {
        cout<<"NO";
    }
    else{
        if(x1==x2){
            cout<<"YES";
        }
        else{
            x1=x1+v1;
            x2=x2+v2;
            if((x2-x1)<v2){
                cout<<"NO";
            }
            else{
                check(x1,x2,v1,v2);
            }

        }
    }
}

int main(){

    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if((x1<x2) && (v1<v2)){
        cout<<"NO";
    }
    else{
        x1=x1+v1;
        x2=x2+v2;
        check(x1,x2,v1,v2);
    }






}
