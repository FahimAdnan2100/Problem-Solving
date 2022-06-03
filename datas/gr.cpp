
#include<iostream>
using namespace std;
int main(){

    int t,r,c,row,col;
    int a[1010][1010],a1[1010][1010];
    cin>>t;
    while(t--){
        cin>>r>>c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>a[r][c];
            }
        }
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>a1[r][c];
            }
        }
    }






}
