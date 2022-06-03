#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,o,r,c,o1,o2,cc=0;
    cin>>n>>o;
    long long int a[100][100];
    long long int b[100][100];
    cin>>r>>c;
    int aa=r,bb=c;
    for(int k=0; k<o; k++)
    {
        cin>>o1>>o2;
        a[o1][o2]=-1;
    }

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n; j++)
        {
            a[r][c]=2;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    r=aa,c=bb;
    cout<<endl<<r<<" "<<c<<endl;
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==a[r][c]){
                a[]
            }


        }
        cout<<endl;
    }
    cout<<8-cc;










}

