#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,m;
    cin>>n>>m;
    long long int a[m+100][3];
    long long int d[n+100][n+100],k=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    /*for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for(int i=0;i<=m;i++){
        for(int j=0;j<n;j++){
            d[i][j]=0;
        }
    }

    for(int i=1;i<=m;i++){
        int b=a[i][0];

        int c=a[i][1];
        int e=a[i][2];
       // cout<<b<<" "<<c<<" "<<e;
        for(int j=0;j<n;j++){
                if(j>=(b-1) && j<=(c-1)){
                    d[i][j]=d[i][j]+d[i-1][j]+e;
                //cout<<d[i][j]<<" ";
                }else{
                    d[i][j]=d[i][j]+d[i-1][j];
                //cout<<d[i][j]<<" ";
                }


        }
       // cout<<endl;
    }
    long long int c[n+100];
    for(int i=m;i<m+1;i++){
        for(int j=0;j<n;j++){
            c[k]=d[i][j];
            //cout<<c[k]<<" ";
            k++;
        }
    }
    sort(c,c+n);

    cout<<c[n-1];






}

