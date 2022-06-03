#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mat1[n+1][n+1],mat2[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat1[i][j]+mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}
